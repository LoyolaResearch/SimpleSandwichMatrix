// pseudocode


// Generate all possible center matrices
//  Test each center if valid and store it if so

// Generate all possible left/right matrices
//  Test each side if valid and store it if so
//  

// iterate through all center matrix possibilities
//   iterate through all right matrix possibilities
//     iterate through all left matrix possibilities
//       multiply the matrices and test and store the results
// 
// 
// 
// 






// Main variables…
unsigned long long int count = power(2, leftY * leftX);
signed char left[count][leftY * leftX]; // (dynamically allocated)
signed char center[count][leftY * leftX]; // (dynamically allocated)
signed char middle[count][leftY * leftX]; // (dynamically allocated)
signed char tmpMatrix[leftY * leftX]; // (dynamically allocated)



// generate all possible binary matrices depending on dimensions
for (i = 0; i < count; i++)
{
	unsigned long long int num = i;
	bool isValid = true;
	for (j = 0; j < leftY * leftX; j++)
	{
		if (num % 2 == 0)
			tmpMatrix[j] = '0'; // place the 0s where num has no remainder
		else
			tmpMatrix[j] = '1'; // place the 1s where num has a remainder
		num /= 2;
	}
	// now we have a valid untested matrix
	// only add the matrices with at least one non-zero digit in each row and column to sandwichMatrix

	
	for (j = 0; j < leftY; j++)
	{// check if the values in each row add up to a result above 0
		int rowZeros = 0;
		for (l = 0; l < leftX; l++)
			rowZeros += (tmpMatrix[j * leftX + l] != '0');
		// if the values in each row add up to 0, mark the matrix as invalid
		if (rowZeros == 0)
			isValid = false;
	}
	
	for (j = 0; j < leftX; j++)
	{// check if the values in each column add up to a result above 0
		int colZeros = 0;
		for (m = 0; m < leftY; m++)
			colZeros += (tmpMatrix[m * leftX + j] != '0');
		// if the values in each column add up to 0, mark the matrix as invalid
		if (colZeros == 0)
			isValid = false;
	}
	// if the matrix is valid, add it to sandwichMatrix (not sure if implemented properly)
	if (isValid)
	{
		for (j = 0; j < leftY * leftX; j++)
			center[usedCenterCount][j] = tmpMatrix[j];
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