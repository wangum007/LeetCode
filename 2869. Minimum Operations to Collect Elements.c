
//You are given an array nums of positive integers and an integer k.

//In one operation, you can remove the last element of the array and add it to your collection.

//Return the minimum number of operations needed to collect elements 1, 2, ..., k.
	

int minOperations(int* nums, int numsSize, int k){
	int sum = ((1 + k) * k ) / 2, i = numsSize, ans = 0;
	bool TB[k];
	
	memset(TB, 0, k);
	
	while(i){
		ans++;
		
		if((nums[i - 1] <= k) && (!TB[nums[i - 1] - 1])){
			sum -= nums[i - 1];
			TB[nums[i - 1] - 1] = 1;
		}
		i--;
		
		if(!sum)
			break;
	}
	
	return ans;
}


