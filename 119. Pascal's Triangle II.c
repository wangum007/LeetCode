
//Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

//In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

int* getRow(int rowIndex, int* returnSize) {
	int* ans = malloc((rowIndex + 1) * sizeof(int));
	int i, j;
	int tmp[rowIndex + 1];
	
	*returnSize = rowIndex + 1;
	if(!rowIndex){
		ans[0] = 1;
		return ans;
	}
	
    for(i = 0; i < rowIndex + 1; i++){
		ans[i] = 0;
		tmp[i] = 0;
	}
	

	for(i = 1; i < rowIndex + 1; i++){
		ans[0] = 1;
		ans[i] = 1;
		tmp[0] = 1;
		tmp[i] = 1;
		for(j = 1; j < i; j++){
			ans[j] = tmp[j - 1] + tmp[j];
		}
		for(j = 1; j < i; j++){
			tmp[j] = ans[j];
		}
	}
	
	return ans;
}

