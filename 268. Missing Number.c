
//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
	

int missingNumber(int* nums, int numsSize) {
    int ans = 0;
	
	for(int i = 0; i < numsSize; i++){
		ans += numsSize - i;
		ans -= nums[i];
	}
	
	return ans;
}



