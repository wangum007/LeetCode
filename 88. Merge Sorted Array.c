
//You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

//Merge nums1 and nums2 into a single array sorted in non-decreasing order.

//The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
//and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

int cmp(const void* a, const void* b){
	return (*(int*)a - *(int*)b);
}
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int i;
	
	if(!m){
		for(i = 0; i < n; i++){
			nums1[i] = nums2[i];
		}
	}
	if(!n)
		return;
	
	
	for(i = m; i < nums1Size; i++){
		nums1[i] = nums2[i - m];
	}
	
	qsort(nums1, nums1Size, sizeof(int), cmp);
}

