
//You are given a 0-indexed integer array nums. A pair of integers x and y is called a strong pair if it satisfies the condition:

//|x - y| <= min(x, y)
//You need to select two integers from nums such that they form a strong pair and their bitwise XOR is the maximum among all strong pairs in the array.

//Return the maximum XOR value out of all possible strong pairs in the array nums.

//Note that you can pick the same integer twice to form a pair.
	

bool chk(int a, int b){
		if(a > b){
			if(b >= (a - b))
				return true;
		}
		else{
			if(a >= (b - a))
				return true;
		}
		return false;
}
int maximumStrongPairXor(int* nums, int numsSize) {
	int ans = 0;
	
    for(int i = 0; i < numsSize; i++){
		for(int j = i + 1; j < numsSize; j++){
			if(ans < (nums[i] ^ nums[j])){
				if(chk(nums[i], nums[j])){
					ans = nums[i] ^ nums[j];
				}
			}
		}
	}
	
	return ans;
}


