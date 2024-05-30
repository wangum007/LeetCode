
//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

//You must write an algorithm with O(log n) runtime complexity.


int searchInsert(int* nums, int numsSize, int target) {
	if(nums[numsSize - 1] < target)
		return numsSize;
	else if(nums[0] > target)
		return 0;
	else if(numsSize == 1)
		return nums[0] >= target ? 0 : 1;

	int mid = numsSize / 2, i, j;
	
	if(nums[mid] == target)
		return mid;
	else if(nums[mid] > target){
		i = 0;
		j = mid;
	}
	else{
		i = mid;
		j = numsSize - 1;
	}
	
	for(i; i < j; i++){
		if(nums[i] == target)
			return i;
		if(nums[i] > target)
			return i;
	}

    return i;
}

