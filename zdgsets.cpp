// Filename: zdgsets.cpp
// Description: Program that simplifies the process of finding zero divisor matrices
// Author: Omar Essa
// Date Modified: March 29, 2024


using namespace std;

#include "zdgsets.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <ctime>

// #define _VERBOSE

void printMatrix2D(datatype** matrix, int rows, int cols, ostream& output);
void printMatrix1D(datatype* matrix, int rows, int cols, ostream& output);
bool multiplyMatrices(datatype* left, int leftX, int leftY, datatype* center, datatype* right, ostream& output, bignumint& countRegularZero, bignumint& countNilPotent, bignumint& countIdemPotent, bignumint& countTotalZeroAndIdem);
void initializeArrays(int leftX, int leftY);
bignumint power(int base, int exponent);

datatype** newLeft = NULL;
datatype** newCenter = NULL;
datatype** newRight = NULL;
datatype** firstProduct = NULL;
datatype** finalProduct = NULL;
datatype* finalProduct1D = NULL;

int main()
{
	int leftX;
	cout << "How many rows would you like in your outer matrices: ";
	cin >> leftX;

	int leftY;
	cout << "How many columns would you like in your outer matrices: ";
	cin >> leftY;

	bignumint count = power(2, leftY * leftX);

	datatype** center = NULL;
	center = new datatype*[count]; // this currently fails when the user enters dimensions 6x6 or higher

	datatype** left = NULL;
	left = new datatype*[count];

	datatype** right = NULL;
	right = new datatype*[count];

	datatype* tmpMatrix = NULL;
	tmpMatrix = new datatype[leftY * leftX];
	
	bignumint i = 0;
	bignumint usedCenterCount = 0;
	bignumint usedLeftCount = 0;
	bignumint usedRightCount = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;

	// this allows us to have a choice between printing the matrices in the console or in a file
	char outputDestination;
	cout << "Would you like to output your sandwich matrices to the console or a file (c/f): ";
	cin >> outputDestination;
	bool outputToFile;

	if (outputDestination == 'c')
	{
		outputToFile = false;
	}
	else if (outputDestination == 'f')
	{
		outputToFile = true;
	}
	else
	{
		cout << "Error: invalid input (should be c or f)" << endl;
		return 0;
	}

	string filename = "";
	if (outputToFile)
	{
		cout << "Please enter a filename in the current directory for the outer and sandwich matrices: ";
		cin.ignore();
		getline(cin, filename);
	}

	// create two files for matrix and summary output
	ostream& output = (outputToFile) ? (*(new ofstream(filename))) : (cout);
	ostream& outputSummary = (outputToFile) ? (*(new ofstream("summary.csv", std::ios::app))) : (cout);


	for (i = 0; i < count; i++)
	{
		// all of the below are three-dimensional because they are arrays of 2d matrices

		// the dimensions are simply sandwich matrix rows and columns
		center[i] = new datatype[leftY * leftX];

		// the dimensions are simply left matrix rows and columns because the outer matrices should be the same dimensions
		left[i] = new datatype[leftX * leftY];
		right[i] = new datatype[leftX * leftY];
	}

	for (i = 0; i < count; i++) // generate all possible binary matrices depending on dimensions
	{
		bignumint num = i;
		bool isValid = true;
		// save all possibilities into tmpMatrix
		for (j = 0; j < leftY * leftX; j++)
		{
				if (num % 2 == 0)
				{
					tmpMatrix[j] = '0'; // place the 0s where num has no remainder
				}
				else
				{
					tmpMatrix[j] = '1'; // place the 1s where num has a remainder
				}
				num /= 2;
		}

		// now we have a valid untested matrix

		// only add the matrices with at least one non-zero digit in each row and column to sandwichMatrix

		// check if the values in each row add up to a result above 0
		for (j = 0; j < leftY; j++)
		{
			int rowZeros = 0;
			for (l = 0; l < leftX; l++)
			{
				rowZeros += (tmpMatrix[j * leftX + l] != '0');
			}

			// if the values in each row add up to 0, mark the matrix as invalid
			if (rowZeros == 0)
			{
				isValid = false;
			}
		}

		// check if the values in each column add up to a result above 0
		for (j = 0; j < leftX; j++)
		{
			int colZeros = 0;
			for (m = 0; m < leftY; m++)
			{
				colZeros += (tmpMatrix[m * leftX + j] != '0');
			}

			// if the values in each column add up to 0, mark the matrix as invalid
			if (colZeros == 0)
			{
				isValid = false;
			}
		}

		// if the matrix is valid, add it to sandwichMatrix (not sure if implemented properly)
		if (isValid)
		{
			for (j = 0; j < leftY * leftX; j++)
			{
				center[usedCenterCount][j] = tmpMatrix[j];
			}
			usedCenterCount++;
		}
	}

	for (i = 1; i < count; i *= 2)
	{
		bignumint num = i;
		for (j = 0; j < leftX * leftY; j++)
		{
			if (num % 2 == 0)
			{
				left[usedLeftCount][j] = '0'; // place the 0s where num has no remainder
				right[usedRightCount][j] = '0'; // place the 0s where num has no remainder
			}
			else
			{
				left[usedLeftCount][j] = '1'; // place the 1s where num has a remainder
				right[usedRightCount][j] = '1'; // place the 1s where num has a remainder
			}
			num /= 2;
		}
		usedLeftCount++;
		usedRightCount++;
	}

	// This was an attempt to give estimates of time for how long the multiplications would take
	
	//clock_t start = clock();
	//double percent;
	//for (bignumint aIndex = 0; aIndex < count; aIndex++)
	//{
	//	if ((int)aIndex == 1)
	//	{
	//		clock_t now = clock();
	//		double time1 = (double)((long)now - (long)start) / CLOCKS_PER_SEC * 1000.0;
	//		percent = 1.0 / (double)count;
	//		double minutes = (time1 * (double)count / 60000.0);
	//		cout << fixed << "Completed " << percent << "% of the calculations. Estimate this could take around "
	//			<< minutes << " minutes (maybe go get a coffee?)." << endl;
	//		/*if (minutes > 200.0) fastUpdates = true;
	//		if (minutes > 300)
	//		{
	//			cout << "ERROR! This will take too long (>5 hours). Exiting!\n";
	//			outputSimple << "zdgsets.exe " << n << " " << k
	//				<< ",ERROR! Too long (min):," << minutes << endl;
	//			exit(44);
	//		}*/
	//	}
	//}

	bignumint countRegularZero = 0;
	bignumint countNilPotent = 0;
	bignumint countIdemPotent = 0;
	bignumint countTotalZeroAndIdem = 0;

	output << "Left," << "Center," << "Right," << "Product," << "Group" << " (" << leftX << "x" << leftY << ")" << endl; // print a header for csv file
	initializeArrays(leftX, leftY); // initialize matrices as 2d instead of 1d
	for (j = 0; j < usedCenterCount; j++) // iterate through all center matrix possibilities
	{
		for (k = 0; k < usedRightCount; k++) // iterate through all right matrix possibilities
		{
			for (l = 0; l < usedLeftCount; l++) // iterate through all left matrix possibilities
			{
				multiplyMatrices(left[l], leftX, leftY, center[j], right[k], output, countRegularZero, countNilPotent, countIdemPotent, countTotalZeroAndIdem);
			}
		}
	}

	// Find what time it is when the program is run
	time_t currentTime = time(0);
	char* currentDateAndTime = ctime(&currentTime);

	// check if the file is empty and only output the header of the summary file if so
	outputSummary.seekp(0, ios::end); // go to the end of the file
	if (outputSummary.tellp() == 0) // check if the position at the end of the file is 0, which would mean it is still at the beginning and therefore empty
	{
		outputSummary << "First Dimension" << "," << "Second Dimension" << "," << "Regular Zero Count" << "," << "Nilpotent Count" << "," << "Idempotent Count" << "," << "Total Zero and Idempotent Count" << "," << "Time of Output" << endl;
	}
	// print the counts of each type of result
	outputSummary << leftX << "," << leftY << "," << countRegularZero << "," << countNilPotent << "," << countIdemPotent << "," << countTotalZeroAndIdem << "," << currentDateAndTime << endl;

	// memory cleanup
	delete[] left;
	delete[] center;
	delete[] right;
	delete[] tmpMatrix;
	delete[] newLeft;
	delete[] newCenter;
	delete[] newRight;
	delete[] firstProduct;
	delete[] finalProduct;

	return 0;
}

// Print out matrices using the number of rows and columns and outputting the results 
// either to the console or a file
void printMatrix2D(datatype** matrix, int rows, int cols, ostream& output)
{
	// print each out
	for (int j = 0; j < rows; j++)
	{
		for (int k = 0; k < cols; k++)
		{
			output << matrix[j][k];
		}
		output << endl;
	}
	output << "(" << rows << ", " << cols << ")";
	output << endl;
}

// Print out matrices using the number of rows and columns and outputting the results 
// either to the console or a file
void printMatrix1D(datatype* matrix, int rows, int cols, ostream& output)
{
	output << "'"; // include an apostrophe at the beginning of each matrix for csv formatting
	// print each out
	for (int j = 0; j < rows * cols; j++)
	{
		output << matrix[j];
	}
	output << ",";
	// output << endl;
}

bignumint power(int base, int exponent)
{
	bignumint result = 1;

	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return result;
}

// initialize the 2d arrays here instead of in the multiplyMatrices function to avoid repeating every time
// you multiply any matrices
void initializeArrays(int leftX, int leftY)
{
	newLeft = new datatype * [leftX];

	newCenter = new datatype * [leftY];

	newRight = new datatype * [leftX];

	firstProduct = new datatype * [leftX];

	finalProduct = new datatype * [leftX];

	finalProduct1D = new datatype[leftX * leftY];

	for (int i = 0; i < leftX; i++)
	{
		newLeft[i] = new datatype[leftY];
		finalProduct[i] = new datatype[leftY];
		newRight[i] = new datatype[leftY];
	}

	for (int i = 0; i < leftY; i++)
	{
		newCenter[i] = new datatype[leftX];
	}

	for (int i = 0; i < leftX; i++)
	{
		firstProduct[i] = new datatype[leftX];
	}
}

// multiply the matrices
bool multiplyMatrices(datatype* left, int leftX, int leftY, datatype* center, datatype* right, ostream& output, bignumint& countRegularZero, bignumint& countNilPotent, bignumint& countIdemPotent, bignumint& countTotalZeroAndIdem)
{
	// convert the left matrix from 1d to 2d
	int i = 0;
	for (int row = 0; row < leftX; row++)
	{
		for (int col = 0; col < leftY; col++)
		{
			newLeft[row][col] = left[i];
			i++;
		}
	}
	
	// convert the center matrix from 1d to 2d
	int j = 0;
	for (int row = 0; row < leftY; row++)
	{
		for (int col = 0; col < leftX; col++)
		{
			newCenter[row][col] = center[j];
			j++;
		}
	}

	// convert the right matrix from 1d to 2d
	int k = 0;
	for (int row = 0; row < leftX; row++)
	{
		for (int col = 0; col < leftY; col++)
		{
			newRight[row][col] = right[k];
			k++;
		}
	}

	// set all values of the middle/first product matrix to 0 so that multiplication can be done on the left and center matrices and the product placed in this matrix
	for (int row = 0; row < leftX; row++)
	{
		for (int col = 0; col < leftX; col++)
		{
			firstProduct[row][col] = '0';
		}
	}

	// perform the multiplication of the left matrix with the center matrix 
	for (int i = 0; i < leftX; i++)
	{
		for (int j = 0; j < leftX; j++)
		{
			for (int k = 0; k < leftY; k++)
			{
				firstProduct[i][j] += ((int)newLeft[i][k] - '0') * ((int)newCenter[k][j] - '0');
			}
		}
	}

	// set all values of the final product matrix to 0 so that multiplication can be done on the first product and right matrices and the product placed in this matrix
	for (int row = 0; row < leftX; row++)
	{
		for (int col = 0; col < leftY; col++)
		{
			finalProduct[row][col] = '0';
		}
	}

	// perform the multiplication of the first product matrix with the right matrix 
	for (int i = 0; i < leftX; i++)
	{
		for (int j = 0; j < leftY; j++)
		{
			for (int k = 0; k < leftX; k++)
			{
				finalProduct[i][j] += ((int)firstProduct[i][k] - '0') * ((int)newRight[k][j] - '0');
			}
		}
	}

	// convert the final product from 2d to 1d for output
	int l = 0;
	for (int row = 0; row < leftX; row++)
	{
		for (int col = 0; col < leftY; col++)
		{
			finalProduct1D[l] = finalProduct[row][col];
			l++;
		}
	}

	// check if the matrices being multiplied are zero divisors and if so, check for regular zero divisors or nilpotents
	bool isZeroDivisor = true;
	bool isNilPotent = true;
	for (int i = 0; i < leftX; i++)
	{
		for (int j = 0; j < leftY; j++)
		{
			if (finalProduct[i][j] != '0') // if the final product is not all zeros, the multiplied matrices are not zero divisors
			{
				isZeroDivisor = false;
			}
			if (newLeft[i][j] != newRight[i][j]) // if the matrices multiplied are not the exact same, they are not nilpotents
			{
				isNilPotent = false;
			}
		}
	}

	// check if the matrices being multiplied are idempotents
	bool isIdemPotent = true;
	for (int i = 0; i < leftX; i++)
	{
		for (int j = 0; j < leftY; j++)
		{
			if (newLeft[i][j] != newRight[i][j] || newRight[i][j] != finalProduct[i][j]) // if the matrices multiplied and the final product are not the exact same, they are not idempotents
			{
				isIdemPotent = false;
			}
		}
	}

	if (isZeroDivisor) // if the matrices multiplied are zero divisors
	{
		#ifdef _VERBOSE
				output << "New Left: " << endl;
				printMatrix2D(newLeft, leftX, leftY, output);
		#endif

		#ifdef _VERBOSE
				output << "New Center: " << endl;
				printMatrix2D(newCenter, leftY, leftX, output);
		#endif

		#ifdef _VERBOSE
				output << "New Right: " << endl;
				printMatrix2D(newRight, leftX, leftY, output);
		#endif

		#ifdef _VERBOSE
				output << "First Product: " << endl;
				printMatrix2D(firstProduct, leftX, leftX, output);
		#endif

		#ifdef _VERBOSE
				output << "Final Product: " << endl;
				printMatrix2D(finalProduct, leftX, leftY, output);
		#endif
		
		if (isNilPotent) // if they are nilpotents
		{
			printMatrix1D(left, leftX, leftY, output);
			printMatrix1D(center, leftY, leftX, output);
			printMatrix1D(right, leftX, leftY, output);
			printMatrix1D(finalProduct1D, leftX, leftY, output);
			output << "Nilpotent" << endl;
			countNilPotent++; // increment the count of nilpotents which is initialized outside the function and passed as a reference parameter
			countTotalZeroAndIdem++; // increment the total count of zero divisors 
		}
		else // if they are regular zero divisors
		{
			printMatrix1D(left, leftX, leftY, output);
			printMatrix1D(center, leftY, leftX, output);
			printMatrix1D(right, leftX, leftY, output);
			printMatrix1D(finalProduct1D, leftX, leftY, output);
			output << "Regular Zero Divisor" << endl;
			countRegularZero++; // increment the count of regular zero divisors which is initialized outside the function and passed as a reference parameter
			countTotalZeroAndIdem++;
		}
	}
	else // if they are not zero divisors
	{
		if (isIdemPotent) // if they are idempotents
		{
			printMatrix1D(left, leftX, leftY, output);
			printMatrix1D(center, leftY, leftX, output);
			printMatrix1D(right, leftX, leftY, output);
			printMatrix1D(finalProduct1D, leftX, leftY, output);
			output << "Idempotent" << endl;
			countIdemPotent++; // increment the count of idempotents which is initialized outside the function and passed as a reference parameter
			countTotalZeroAndIdem++;
		}
	}
	return isZeroDivisor;
}