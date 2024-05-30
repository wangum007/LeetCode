
//You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

//Increment the large integer by one and return the resulting array of digits.


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int i, hold = 1, j;
	int* ans;
	
	for(i = digitsSize - 1; i >= 0; i--){
		if(hold){
			if((digits[i] + 1) >= 10){
				digits[i] = 0;
			}
			else{
				digits[i]++;
				hold = 0;
			}
		}
		else{
			*returnSize = digitsSize;
			ans = malloc(digitsSize * sizeof(int));
			
			for(j = 0; j < digitsSize; j++){
				ans[j] = digits[j];
			}
			
			return ans;
		}
	}
	

	if(hold){
		*returnSize = digitsSize + 1;
		ans = malloc((digitsSize + 1) * sizeof(int));
		ans[0] = 1;	
		
		for(i = 1; i < digitsSize + 1; i++){
			ans[i] = digits[i - 1];
		}
	}
	else{
		*returnSize = digitsSize;
		ans = malloc(digitsSize * sizeof(int));
			
		for(i = 0; i < digitsSize; i++){
			ans[i] = digits[i];
		}
	}

	return ans;
}

