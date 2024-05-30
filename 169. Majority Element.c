
//Given an array nums of size n, return the majority element.

//The majority element is the element that appears more than ?n / 2? times. You may assume that the majority element always exists in the array.


int majorityElement(int* nums, int numsSize) {
	struct chk_arr{
		int val;
		bool chk;
	};
	
	int i, j, chk;
	struct chk_arr N[numsSize];
	
	for(i = 0; i < numsSize; i++){
		N[i].val = nums[i];
		N[i].chk = 0;
	}
	
	for(i = 0; i < numsSize; i++){
		if(N[i].chk)
			continue;
			
		chk = 0;
		for(j = i; j < numsSize; j++){
			if(N[j].val == nums[i]){
				N[j].chk = 1;
				chk++;
			}
		}
		if(chk > (numsSize / 2))
			return nums[i];
	}
	
	return nums[i];
}

