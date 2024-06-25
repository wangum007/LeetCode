
//You are given an integer array nums consisting of 2 * n integers.

//You need to divide nums into n pairs such that:

//Each element belongs to exactly one pair.
//The elements present in a pair are equal.
//Return true if nums can be divided into n pairs, otherwise return false.
	

bool divideArray(int* nums, int numsSize) {
	int trg, i, j;
	
	for(i = 0; i < numsSize; i++){
		if(nums[i]){
			trg = nums[i];
			
			for(j = i + 1; j < numsSize; j++){
				if(nums[j] == trg){
					nums[j] = 0;
					trg = 0;
					break;
				}
			}
			
			if(trg)
				return false;
		}
	}
	
	return true;
}


