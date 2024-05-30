
//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
	

bool containsDuplicate(int* nums, int numsSize) {
	struct node{
		int val;
		struct node* next;
	};
	struct node* arr[100];
	struct node* tmp;
	struct node* prv;
	int i, j, idx;
	int hash_func(int key){
		return key % 100;
	}
	
	for(i = 0; i < 100; i++){
		arr[i] = NULL;
	}
	
	for(i = 0; i < numsSize; i++){
		idx = hash_func(abs(nums[i]));
		if(arr[idx]){
			tmp = arr[idx];
			while(tmp){
				if(tmp->val == nums[i])
					return true;
				prv = tmp;
				tmp = tmp->next;
			}
			tmp = malloc(sizeof(struct node));
			tmp->val = nums[i];
			tmp->next = NULL;
			prv->next = tmp;
		}
		else{
			arr[idx] = malloc(sizeof(struct node));
			arr[idx]->val = nums[i];
			arr[idx]->next = NULL;
		}
	}
	
	return false;
}

