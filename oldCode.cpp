//	datatype* center1 = NULL;
//	center1 = new datatype[3 * 2];
//
//	datatype* left1 = NULL;
//	left1 = new datatype[2 * 3];
//
//	datatype* right1 = NULL;
//	right1 = new datatype[2 * 3];
//
//	// First sample matrices
//
//	center1[0] = '1'; center1[1] = '0'; 
//	center1[2] = '1'; center1[3] = '0'; 
//	center1[4] = '1'; center1[5] = '0';
//
//
//#ifdef _VERBOSE
//	cout << endl;
//	cout << "First sample: " << endl;
//	cout << endl;
//#endif
//#ifdef _VERBOSE
//	cout << "Center: " << endl;
//	printMatrix1D(center1, 3, 2, cout);
//#endif
//
//	left1[0] = '0'; left1[1] = '0'; left1[2] = '0';
//	left1[3] = '0'; left1[4] = '1'; left1[5] = '0';
//
//#ifdef _VERBOSE
//	cout << "Left: " << endl;
//	printMatrix1D(left1, 2, 3, cout);
//#endif
//
//	right1[0] = '0'; right1[1] = '0'; right1[2] = '1';
//	right1[3] = '0'; right1[4] = '0'; right1[5] = '0';
//
//#ifdef _VERBOSE
//	cout << "Right: " << endl;
//	printMatrix1D(right1, 2, 3, cout);
//#endif
//	
//	initializeArrays(2, 3);
//	multiplyMatrices(left1, 2, 3, center1, right1, cout);
//
//	// First sample matrices part 2 (inverse dimensions)
//
//	center1[0] = '1'; center1[1] = '1'; center1[2] = '1'; 
//	center1[3] = '0'; center1[4] = '1'; center1[5] = '1';
//
//#ifdef _VERBOSE
//	cout << endl;
//	cout << "First sample part 2: " << endl;
//	cout << endl;
//#endif
//#ifdef _VERBOSE
//	cout << "Center: " << endl;
//	printMatrix1D(center1, 2, 3, cout);
//#endif
//
//	left1[0] = '0'; left1[1] = '0'; 
//	left1[2] = '0'; left1[3] = '1';
//	left1[4] = '0'; left1[5] = '0';
//
//#ifdef _VERBOSE
//	cout << "Left: " << endl;
//	printMatrix1D(left1, 3, 2, cout);
//#endif
//
//	right1[0] = '1'; right1[1] = '0'; 
//	right1[2] = '0'; right1[3] = '0';
//	right1[4] = '0'; right1[5] = '0';
//
//#ifdef _VERBOSE
//	cout << "Right: " << endl;
//	printMatrix1D(right1, 3, 2, cout);
//#endif
//
//	initializeArrays(3, 2);
//	multiplyMatrices(left1, 3, 2, center1, right1, cout);
//
//	datatype* center2 = NULL;
//	center2 = new datatype[6 * 2];
//
//	datatype* left2 = NULL;
//	left2 = new datatype[2 * 6];
//
//	datatype* right2 = NULL;
//	right2 = new datatype[2 * 6];
//
//	// Second sample matrices
//
//	center2[0] = '1'; center2[1] = '0'; center2[2] = '1'; center2[3] = '1'; center2[4] = '1'; center2[5] = '0';
//	center2[6] = '1'; center2[7] = '0'; center2[8] = '1'; center2[9] = '0'; center2[10] = '1'; center2[11] = '1';
//
//#ifdef _VERBOSE
//	cout << endl;
//	cout << "Second sample: " << endl;
//	cout << endl;
//#endif
//#ifdef _VERBOSE
//	cout << "Center: " << endl;
//	printMatrix1D(center2, 6, 2, cout);
//#endif
//
//	left2[0] = '0'; left2[1] = '0';
//	left2[2] = '0'; left2[3] = '0'; 
//	left2[4] = '0'; left2[5] = '1';
//	left2[6] = '0'; left2[7] = '0';
//	left2[8] = '0'; left2[9] = '0';
//	left2[10] = '0'; left2[11] = '0';
//
//#ifdef _VERBOSE
//	cout << "Left: " << endl;
//	printMatrix1D(left2, 2, 6, cout);
//#endif
//
//	right2[0] = '0'; right2[1] = '0'; 
//	right2[2] = '0'; right2[3] = '0'; 
//	right2[4] = '0'; right2[5] = '0';
//	right2[6] = '1'; right2[7] = '0';
//	right2[8] = '0'; right2[9] = '0';
//	right2[10] = '0'; right2[11] = '0';
//
//#ifdef _VERBOSE
//	cout << "Right: " << endl;
//	printMatrix1D(right2, 2, 6, cout);
//#endif
//
//	initializeArrays(2, 6);
//	multiplyMatrices(left2, 2, 6, center2, right2, cout);
//
//	// Second sample matrices part 2 (inverse dimensions)
//
//	center2[0] = '1'; center2[1] = '0'; 
//	center2[2] = '1'; center2[3] = '0'; 
//	center2[4] = '0'; center2[5] = '1';
//	center2[6] = '1'; center2[7] = '1';
//	center2[8] = '1'; center2[9] = '0';
//	center2[10] = '0'; center2[11] = '1';
//
//#ifdef _VERBOSE
//	cout << endl;
//	cout << "Second sample part 2: " << endl;
//	cout << endl;
//#endif
//#ifdef _VERBOSE
//	cout << "Center: " << endl;
//	printMatrix1D(center2, 2, 6, cout);
//#endif
//
//	left2[0] = '1'; left2[1] = '0'; left2[2] = '0'; left2[3] = '0'; left2[4] = '0'; left2[5] = '0';
//	left2[6] = '0'; left2[7] = '0'; left2[8] = '0'; left2[9] = '0'; left2[10] = '0'; left2[11] = '0';
//
//#ifdef _VERBOSE
//	cout << "Left: " << endl;
//	printMatrix1D(left2, 6, 2, cout);
//#endif
//
//	right2[0] = '0'; right2[1] = '0'; right2[2] = '0'; right2[3] = '0'; right2[4] = '0'; right2[5] = '0';
//	right2[6] = '0'; right2[7] = '0'; right2[8] = '0'; right2[9] = '0'; right2[10] = '0'; right2[11] = '1';
//
//#ifdef _VERBOSE
//	cout << "Right: " << endl;
//	printMatrix1D(right2, 6, 2, cout);
//#endif
//
//	initializeArrays(6, 2);
//	multiplyMatrices(left2, 6, 2, center2, right2, cout);
//
//	datatype* center3 = NULL;
//	center3 = new datatype[5 * 4];
//
//	datatype* left3 = NULL;
//	left3 = new datatype[4 * 5];
//
//	datatype* right3 = NULL;
//	right3 = new datatype[4 * 5];
//
//	// Third sample matrices
//
//	center3[0] = '1'; center3[1] = '1'; center3[2] = '1'; center3[3] = '1'; 
//	center3[4] = '1'; center3[5] = '1'; center3[6] = '1'; center3[7] = '1'; 
//	center3[8] = '1'; center3[9] = '1'; center3[10] = '1'; center3[11] = '1';
//	center3[12] = '1'; center3[13] = '1'; center3[14] = '1'; center3[15] = '1';
//	center3[16] = '1'; center3[17] = '1'; center3[18] = '1'; center3[19] = '1';
//
//#ifdef _VERBOSE
//	cout << endl;
//	cout << "Third sample: " << endl;
//	cout << endl;
//#endif
//#ifdef _VERBOSE
//	cout << "Center: " << endl;
//	printMatrix1D(center3, 5, 4, cout);
//#endif
//
//	left3[0] = '0'; left3[1] = '0'; left3[2] = '0'; left3[3] = '0'; left3[4] = '0';
//	left3[5] = '0'; left3[6] = '0'; left3[7] = '0'; left3[8] = '0'; left3[9] = '0';
//	left3[10] = '0'; left3[11] = '0'; left3[12] = '0'; left3[13] = '0'; left3[14] = '1';
//	left3[15] = '0'; left3[16] = '0'; left3[17] = '0'; left3[18] = '0'; left3[19] = '0';
//
//#ifdef _VERBOSE
//	cout << "Left: " << endl;
//	printMatrix1D(left3, 4, 5, cout);
//#endif
//
//	right3[0] = '0'; right3[1] = '0'; right3[2] = '0'; right3[3] = '0'; right3[4] = '0';
//	right3[5] = '0'; right3[6] = '1'; right3[7] = '0'; right3[8] = '0'; right3[9] = '0';
//	right3[10] = '0'; right3[11] = '0'; right3[12] = '0'; right3[13] = '0'; right3[14] = '0';
//	right3[15] = '0'; right3[16] = '0'; right3[17] = '0'; right3[18] = '0'; right3[19] = '0';
//
//#ifdef _VERBOSE
//	cout << "Right: " << endl;
//	printMatrix1D(right3, 4, 5, cout);
//#endif
//
//	initializeArrays(4, 5);
//	multiplyMatrices(left3, 4, 5, center3, right3, cout);
//
//	// Third sample matrices part 2 (inverse dimensions)
//
//	center3[0] = '1'; center3[1] = '1'; center3[2] = '1'; center3[3] = '1'; center3[4] = '1'; 
//	center3[5] = '1'; center3[6] = '1'; center3[7] = '1'; center3[8] = '1'; center3[9] = '1'; 
//	center3[10] = '1'; center3[11] = '1'; center3[12] = '1'; center3[13] = '1'; center3[14] = '1'; 
//	center3[15] = '1'; center3[16] = '1'; center3[17] = '1'; center3[18] = '1'; center3[19] = '1';
//
//#ifdef _VERBOSE
//	cout << endl;
//	cout << "Third sample part 2: " << endl;
//	cout << endl;
//#endif
//#ifdef _VERBOSE
//	cout << "Center: " << endl;
//	printMatrix1D(center3, 4, 5, cout);
//#endif
//
//	left3[0] = '0'; left3[1] = '0'; left3[2] = '0'; left3[3] = '0'; 
//	left3[4] = '0'; left3[5] = '1'; left3[6] = '0'; left3[7] = '0'; 
//	left3[8] = '0'; left3[9] = '0'; left3[10] = '0'; left3[11] = '0'; 
//	left3[12] = '0'; left3[13] = '0'; left3[14] = '0'; left3[15] = '0'; 
//	left3[16] = '0'; left3[17] = '0'; left3[18] = '0'; left3[19] = '0';
//
//#ifdef _VERBOSE
//	cout << "Left: " << endl;
//	printMatrix1D(left3, 5, 4, cout);
//#endif
//
//	right3[0] = '0'; right3[1] = '0'; right3[2] = '0'; right3[3] = '0'; 
//	right3[4] = '0'; right3[5] = '0'; right3[6] = '0'; right3[7] = '0'; 
//	right3[8] = '0'; right3[9] = '0'; right3[10] = '0'; right3[11] = '0'; 
//	right3[12] = '0'; right3[13] = '0'; right3[14] = '0'; right3[15] = '0'; 
//	right3[16] = '0'; right3[17] = '1'; right3[18] = '0'; right3[19] = '0';
//
//#ifdef _VERBOSE
//	cout << "Right: " << endl;
//	printMatrix1D(right3, 5, 4, cout);
//#endif
//
//	initializeArrays(5, 4);
//	multiplyMatrices(left3, 5, 4, center3, right3, cout);

//// this prompts the user to choose how many rows and columns the outer matrices have
	//int leftRows;
	//cout << "How many rows would you like in your outer matrices: ";
	//cin >> leftRows;

	//int leftCols;
	//cout << "How many columns would you like in your outer matrices: ";
	//cin >> leftCols;

	//// the sandwich matrix in between the outer matrices has the opposite dimensions
	//int sandRows = leftCols;
	//int sandCols = leftRows;

	//// initialize number of total potential matrices based on dimensions
	//bignumint count = pow(2, sandRows * sandCols);

	//// initialize necessary matrices
	//datatype*** sandwichMatrix = NULL;
	//sandwichMatrix = new datatype**[count];

	//datatype** tmpMatrix = NULL;
	//tmpMatrix = new datatype*[count];

	//datatype*** leftMatrix = NULL;
	//leftMatrix = new datatype**[count];

	//datatype*** rightMatrix = NULL;
	//rightMatrix = new datatype**[count];

	//datatype*** resultMatrix = NULL;
	//resultMatrix = new datatype**[count];

	//datatype*** resultMatrix2 = NULL;
	//resultMatrix2 = new datatype**[count];

	//// initialize necessary indices and counts
	///*bignumint i = 0;
	//bignumint usedSandCount = 0;
	//bignumint usedLeftCount = 0;
	//bignumint usedRightCount = 0;
	//int j = 0;
	//int k = 0;
	//int l = 0;
	//int m = 0;*/

	//// initialize inner parts of matrices
	//for (i = 0; i < count; i++)
	//{
	//	// two-dimensional because a temporary matrix should only represent one matrix that is
	//	// being checked to see if it is a valid sandwich matrix or not
	//	tmpMatrix[i] = new datatype[sandRows * sandCols];

	//	// all of the below are three-dimensional because they are arrays of 2d matrices
	//	
	//	// the dimensions are simply sandwich matrix rows and columns
	//	sandwichMatrix[i] = new datatype*[sandRows];
	//	for (j = 0; j < sandRows; j++)
	//	{
	//		sandwichMatrix[i][j] = new datatype[sandCols];
	//	}

	//	// the dimensions are simply left matrix rows and columns because the outer matrices should be the same dimensions
	//	leftMatrix[i] = new datatype*[leftRows];
	//	rightMatrix[i] = new datatype*[leftRows];
	//	for (j = 0; j < leftRows; j++)
	//	{
	//		leftMatrix[i][j] = new datatype[leftCols];
	//		rightMatrix[i][j] = new datatype[leftCols];
	//	}

	//	// the dimensions are left matrix rows and sandwich matrix columns because it is a product
	//	// of the left matrix and the sandwich matrix, which takes the rows of the first and the columns
	//	// of the second
	//	resultMatrix[i] = new datatype*[leftRows];
	//	for (j = 0; j < sandCols; j++)
	//	{
	//		resultMatrix[i][j] = new datatype[sandCols];
	//	}

	//	// the dimensions are left matrix rows and left matrix columns because the rows of the previous product
	//	// is the same as the left matrix rows and the columns of the right matrix is the same as the left matrix
	//	// columns 
	//	// *** (flipped leftCols and leftRows because 2x6 and 3x6 matrices were not working and it fixed it 
	//	// but unsure if it truly fixed the problem or was luck) ***
	//	resultMatrix2[i] = new datatype*[leftRows];
	//	for (j = 0; j < leftCols; j++)
	//	{
	//		resultMatrix2[i][j] = new datatype[leftCols];
	//	}
	//}

	//// find possible sandwich matrices
	//for (i = 0; i < count; i++) // generate all possible binary matrices depending on dimensions
	//{
	//	bignumint num = i;
	//	bool isValid = true;
	//	// save all possibilities into tmpMatrix
	//	for (j = 0; j < sandRows; j++)
	//	{
	//		for (k = 0; k < sandCols; k++)
	//		{
	//			if (num % 2 == 0)
	//			{
	//				tmpMatrix[j][k] = '0'; // place the 0s where num has no remainder
	//			}
	//			else
	//			{
	//				tmpMatrix[j][k] = '1'; // place the 1s where num has a remainder
	//			}
	//			num /= 2;
	//		}
	//	}

	//	// now we have a valid untested matrix

	//	// only add the matrices with at least one non-zero digit in each row and column to sandwichMatrix
	//	
	//	// check if the values in each row add up to a result above 0
	//	for (j = 0; j < sandRows; j++)
	//	{
	//		int rowZeros = 0;
	//		for (l = 0; l < sandCols; l++)
	//		{
	//			rowZeros += (tmpMatrix[j][l] != '0');
	//		}

	//		// if the values in each row add up to 0, mark the matrix as invalid
	//		if (rowZeros == 0)
	//		{
	//			isValid = false;
	//		}
	//	}

	//	// check if the values in each column add up to a result above 0
	//	for (j = 0; j < sandCols; j++)
	//	{
	//		int colZeros = 0;
	//		for (m = 0; m < sandRows; m ++)
	//		{
	//			colZeros += (tmpMatrix[m][j] != '0');
	//		}

	//		// if the values in each column add up to 0, mark the matrix as invalid
	//		if (colZeros == 0)
	//		{
	//			isValid = false;
	//		}
	//	}
	//	
	//	// if the matrix is valid, add it to sandwichMatrix (not sure if implemented properly)
	//	if (isValid)
	//	{
	//		for (j = 0; j < sandRows; j++)
	//		{
	//			for (k = 0; k < sandCols; k++)
	//			{
	//				sandwichMatrix[usedSandCount][j][k] = tmpMatrix[j][k];
	//			}
	//		}
	//		usedSandCount++;
	//	}
	//}

	//// find possible left and right matrices
	//for (i = 1; i < count; i *= 2)
	//{
	//	bignumint num = i;
	//	for (j = 0; j < leftRows; j++)
	//	{
	//		for (k = 0; k < leftCols; k++)
	//		{
	//			if (num % 2 == 0)
	//			{
	//				leftMatrix[usedLeftCount][j][k] = '0'; // place the 0s where num has no remainder
	//				rightMatrix[usedRightCount][j][k] = '0'; // place the 0s where num has no remainder
	//			}
	//			else
	//			{
	//				leftMatrix[usedLeftCount][j][k] = '1'; // place the 1s where num has a remainder
	//				rightMatrix[usedRightCount][j][k] = '1'; // place the 1s where num has a remainder
	//			}
	//			num /= 2;
	//		}
	//	}
	//	usedLeftCount++;
	//	usedRightCount++;
	//}

	//output << "Outer Matrices:" << endl;
	//for (i = 0; i < usedLeftCount; i++)
	//{
	//	printMatrix2D(leftMatrix[i], leftRows, leftCols, output);
	//}

	//output << "Sandwich Matrices:" << endl;
	//for (i = 0; i < usedSandCount; i++)
	//{
	//	printMatrix2D(sandwichMatrix[i], sandRows, sandCols, output);
	//}

	//// print the number of valid matrices that were added to sandwichMatrix
	//cout << "number of valid sandwich matrices: " << usedSandCount << endl;

	//// print the number of valid matrices that were added to leftMatrix and rightMatrix
	//cout << "number of valid left matrices: " << usedLeftCount << endl;
	//cout << "number of valid right matrices: " << usedRightCount << endl;

	//system("pause");
	//output1 << "Products:" << endl;
	//for (j = 0; j < usedSandCount; j++)
	//{
	//	output1 << "------first product set " << j << "----------" << endl;
	//	for (k = 0; k < usedLeftCount; k++)
	//	{
	//		output1 << "------first product " << k << " along with subsequent final products----------" << endl;
	//		multiplyMatricesOld(leftMatrix[k], sandwichMatrix[j], resultMatrix[j], leftRows, leftCols, sandCols);
	//		printMatrix2D(resultMatrix[j], leftRows, sandCols, output1);
	//		for (l = 0; l < usedRightCount; l++)
	//		{
	//			multiplyMatricesOld(resultMatrix[j], rightMatrix[l], resultMatrix2[j], sandCols, leftRows, leftCols);
	//			printMatrix2D(resultMatrix2[j], leftRows, leftCols, output1);
	//		}
	//	}
	//}

	//delete[] sandwichMatrix;
	//delete[] leftMatrix;
	//delete[] rightMatrix;
	//delete[] resultMatrix;
	//delete[] resultMatrix2;

//// Initialize a new result matrix, multiply the desired matrices using methods from linear algebra (multiply the values of 
//// the first matrix's rows with the subsequent values in the second's columns and then add the totals of each of the first's
//// rows and the second's columns), and save the results in the result matrix
//void multiplyMatricesOld(datatype** matrix1, datatype** matrix2, datatype** result, int outRows, int outCols, int sandCols)
//{
//	for (int i = 0; i < outRows; i++)
//	{
//		for (int j = 0; j < sandCols; j++)
//		{
//			result[i][j] = '0';
//		}
//	}
//	for (int i = 0; i < outRows; i++)
//	{
//		for (int j = 0; j < sandCols; j++)
//		{
//			for (int k = 0; k < outCols; k++)
//			{
//				result[i][j] += ((int)matrix1[i][k] - '0') * ((int)matrix2[k][j] - '0');
//			}
//		}
//	}
//}
//void multiplyMatricesTest(datatype* left, int leftX, int leftY, datatype* center, datatype* right, ostream& output1)
//{
//	datatype** newLeft = NULL;
//	newLeft = new datatype * [leftX * leftY];
//
//	datatype** newCenter = NULL;
//	newCenter = new datatype * [leftX * leftY];
//
//	datatype** newRight = NULL;
//	newRight = new datatype * [leftX * leftX];
//
//	datatype** finalProduct = NULL;
//	finalProduct = new datatype * [leftX * leftY];
//
//	for (int i = 0; i < leftX * leftY; i++)
//	{
//		newLeft[i] = new datatype[leftX * leftY];
//		newCenter[i] = new datatype[leftX * leftY];
//		finalProduct[i] = new datatype[leftX * leftY];
//	}
//
//	for (int i = 0; i < leftX * leftX; i++)
//	{
//		newRight[i] = new datatype[leftX * leftX];
//	}
//
//
//	int i = 0;
//	for (int row = 0; row < leftY; row++)
//	{
//		for (int col = 0; col < leftX; col++)
//		{
//			newCenter[row][col] = center[i];
//			i++;
//		}
//	}
//
//	int j = 0;
//	for (int row = 0; row < leftX; row++)
//	{
//		for (int col = 0; col < leftY; col++)
//		{
//			newLeft[row][col] = left[j];
//			j++;
//		}
//	}
//
//	int k = 0;
//	for (int row = 0; row < leftX; row++)
//	{
//		for (int col = 0; col < leftX; col++)
//		{
//			newRight[row][col] = right[k];
//			k++;
//		}
//	}
//
//	for (int i = 0; i < leftX; i++)
//	{
//		for (int j = 0; j < leftX; j++)
//		{
//			for (int k = 0; k < leftY; k++)
//			{
//				newRight[i][j] += ((int)newLeft[i][k] - '0') * ((int)newCenter[k][j] - '0');
//			}
//		}
//	}
//	printMatrix2D(newRight, leftX, leftX, output1);
//
//	for (int i = 0; i < leftX; i++)
//	{
//		for (int j = 0; j < leftY; j++)
//		{
//			finalProduct[i][j] = '0';
//		}
//	}
//
//	for (int i = 0; i < leftY; i++)
//	{
//		for (int j = 0; j < leftY; j++)
//		{
//			for (int k = 0; k < leftX; k++)
//			{
//				finalProduct[i][j] += ((int)newRight[i][k] - '0') * ((int)newLeft[k][j] - '0');
//				//cout << finalProduct[i][j];
//			}
//			//cout << endl;
//		}
//		//cout << endl;
//	}
//	printMatrix2D(finalProduct, leftX, leftY, output1);
//
//	delete[] newLeft;
//	delete[] newCenter;
//	delete[] newRight;
//}
//
//void multiplyMatricesTest2(datatype* left, int leftX, int leftY, datatype* center, datatype* right, bignumint count, ostream& output1)
//{
//	datatype** newLeft = NULL;
//	newLeft = new datatype * [leftX * leftY];
//
//	datatype** newCenter = NULL;
//	newCenter = new datatype * [leftY * leftX];
//
//	datatype** newRight = NULL;
//	newRight = new datatype * [leftX * leftX];
//
//	datatype** finalProduct = NULL;
//	finalProduct = new datatype * [leftX * leftY];
//
//
//	for (int i = 0; i < leftX * leftY; i++)
//	{
//		newLeft[i] = new datatype[leftX * leftY];
//		newCenter[i] = new datatype[leftY * leftX];
//		finalProduct[i] = new datatype[leftX * leftY];
//	}
//
//	for (int i = 0; i < leftX * leftX; i++)
//	{
//		newRight[i] = new datatype[leftX * leftX];
//	}
//
//
//	int i = 0;
//	for (int row = 0; row < leftY; row++)
//	{
//		for (int col = 0; col < leftX; col++)
//		{
//			newCenter[row][col] = center[i];
//			i++;
//		}
//	}
//
//	int j = 0;
//	for (int row = 0; row < leftX; row++)
//	{
//		for (int col = 0; col < leftY; col++)
//		{
//			newLeft[row][col] = left[j];
//			//cout << newLeft[row][col];
//			j++;
//		}
//		//cout << endl;
//	}
//	//cout << endl;
//
//	int k = 0;
//	for (int row = 0; row < leftX; row++)
//	{
//		for (int col = 0; col < leftX; col++)
//		{
//			newRight[row][col] = right[k];
//			k++;
//		}
//	}
//
//	for (int i = 0; i < leftX; i++)
//	{
//		for (int j = 0; j < leftX; j++)
//		{
//			for (int k = 0; k < leftY; k++)
//			{
//				newRight[i][j] += ((int)newLeft[i][k] - '0') * ((int)newCenter[k][j] - '0');
//				//cout << newRight[i][j];
//			}
//			//cout << endl;
//		}
//		//cout << endl;
//	}
//	printMatrix2D(newRight, leftX, leftX, output1);
//
//	for (int i = 0; i < leftX; i++)
//	{
//		for (int j = 0; j < leftY; j++)
//		{
//			finalProduct[i][j] = '0';
//		}
//	}
//
//	for (int i = 0; i < leftX; i++)
//	{
//		//cout << "i: " << i << endl;
//		for (int j = 0; j < leftY; j++)
//		{
//			//cout << "j: " << j << endl;
//			for (int k = 0; k < leftX; k++)
//			{
//				//cout << "k: " << k << endl;
//				finalProduct[i][j] += ((int)newRight[i][k] - '0') * ((int)newLeft[k][j] - '0');
//				//cout << finalProduct[i][j];
//			}
//			//cout << endl;
//		}
//		//cout << endl;
//	}
//	printMatrix2D(finalProduct, leftX, leftY, output1);
//
//	delete[] newLeft;
//	delete[] newCenter;
//	delete[] newRight;
//}