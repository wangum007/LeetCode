
//Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
	

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
	int* ans;
	
    int brn(int x){
        int rt = 0;

        while(x){
            x &= x - 1;
            rt++;
        }
        return rt;
    }

	*returnSize = n + 1;
	ans = malloc(*returnSize * sizeof(int));

    for(int i = 0; i <= n; i++){
        ans[i] = brn(i);
    }
	
	return ans;
}


