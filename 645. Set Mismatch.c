
//You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

//You are given an integer array nums representing the data status of this set after the error.

//Find the number that occurs twice and the number that is missing and return them in the form of an array.


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
	int i, j, sum = 0, x = 0;
	int* ans;
	
	*returnSize = 2;
	ans = malloc(2 * sizeof(int));
	
	for(i = 0; i < numsSize; i++){
		sum += nums[i];
	}
	
	for(i = 0; i < numsSize; i++){
		for(j = 0; j < numsSize; j++){
			if((nums[i] == nums[j]) && (i != j)){
				x = nums[i];
				break;
			}
		}
		
		if(x)
			break;
	}
	
	ans[0] = x;
	ans[1] = x + (((1 + numsSize) * numsSize) / 2) - sum;
	
	return ans;
}


