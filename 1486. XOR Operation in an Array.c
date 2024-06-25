
//You are given an integer n and an integer start.

//Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.

//Return the bitwise XOR of all elements of nums.
	

int xorOperation(int n, int start) {
    int i, ans = start, next = start;
	
	for(i = 1; i < n; i++){
		next += 2;
		ans ^= next;
	}
	
	return ans;
}


