
//You are given an integer array arr. Sort the integers in the array in ascending order by the number of 1's in their binary representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.

//Return the array after sorting it.
	

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
void swap_1s(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int get_new_ref_1s(int* arr, int head, int end){
	int rt = head - 1, end_1s = count_1(arr[end]);
	
	for(int i = head; i < end; i++){
		if(count_1(arr[i]) < end_1s){
			rt++;
			swap_1s(&arr[rt], &arr[i]);
		}
		else if(count_1(arr[i]) == end_1s){
			if(arr[i] < arr[end]){
				rt++;
				swap_1s(&arr[rt], &arr[i]);
			}
		}
	}
	
	swap_1s(&arr[rt + 1], &arr[end]);
	
	return rt + 1;
}
void quick_sort_1s(int* arr, int head, int end){
	if(end > head){
		int ref = get_new_ref_1s(arr, head, end);
		
		quick_sort_1s(arr, ref + 1, end);
		quick_sort_1s(arr, head, ref - 1);
	}
}
int* sortByBits(int* arr, int arrSize, int* returnSize) {
	*returnSize = arrSize;
	quick_sort_1s(arr, 0, arrSize - 1);
	
	return arr;
}


