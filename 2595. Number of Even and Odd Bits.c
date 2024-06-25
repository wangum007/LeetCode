
//You are given a positive integer n.

//Let even denote the number of even indices in the binary representation of n (0-indexed) with value 1.

//Let odd denote the number of odd indices in the binary representation of n (0-indexed) with value 1.

//Return an integer array answer where answer = [even, odd].
	

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count_1(int x){
	int rt = 0;
	while(x){
		rt++;
		x &= (x - 1);
	}
	return rt;
}
int* evenOddBit(int n, int* returnSize) {
	int* ans = malloc(2 * sizeof(int));
	
	*returnSize = 2;
	ans[0] = count_1(n & 0x55555555);
	ans[1] = count_1(n & 0xaaaaaaaa);
	
	return ans;
}


