
//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space.

int singleNumber(int* nums, int numsSize) {
	int i, j, ans, CT;
	
	for(i = 0; i < numsSize; i++){
		j = 0;
        CT = 0;
		
		while(j < numsSize){
			if(!(nums[i] ^ nums[j])){
                CT++;
			}

            if(CT > 1)
                break;
            
            j++;
		}

        if(CT < 2){
            ans = nums[i];
            break;
        }
	}
    return ans;
}

