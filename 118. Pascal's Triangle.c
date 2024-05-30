
//Given an integer numRows, return the first numRows of Pascal's triangle.

//In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
	int** ans = malloc(numRows * sizeof(int*));
	int i, j;
	
	*returnColumnSizes = malloc(numRows * sizeof(int));
	*returnSize = numRows;
	
	for(i = 0; i < numRows; i++){
		ans[i] = malloc((i + 1) * sizeof(int));
		(*returnColumnSizes)[i] = i + 1;
	}
	
	ans[0][0] = 1;
    for(i = 1; i < numRows; i++){
		ans[i][0] = 1;
		ans[i][i] = 1;
		
		for(j = 1; j < i; j++){
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
	}
	
	return ans;
}

