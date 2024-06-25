
//You are given a 0-indexed integer array nums and an integer k.

//Return an integer that denotes the sum of elements in nums whose corresponding indices have exactly k set bits in their binary representation.

//The set bits in an integer are the 1's present when it is written in binary.

//For example, the binary representation of 21 is 10101, which has 3 set bits.
	

int sumIndicesWithKSetBits(int* nums, int numsSize, int k){
	int count_1(int x){
		int rt = 0;
		
		while(x){
			x &= (x - 1);
			rt++;
		}
		return rt;
	}
	
	int ans = 0;
	
	for(int i = 0; i < numsSize; i++){
		if(k == count_1(i))
			ans += nums[i];
	}
	return ans;
}


