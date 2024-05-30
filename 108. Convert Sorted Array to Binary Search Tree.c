
//Given an integer array nums where the elements are sorted in ascending order, convert it to a 
//height-balanced
// binary search tree.

struct TreeNode* creat_node(int val){
	struct TreeNode* rt = malloc(sizeof(struct TreeNode));
	rt->val = val;
	rt->left = NULL;
	rt->right = NULL;
	return rt;
}
struct TreeNode* set_tree(int down, int top, int* arr){
	if(down > top)
		return NULL;
	
	int mid = down + (top - down) / 2;
	struct TreeNode* root = creat_node(arr[mid]);
	
	root->left = set_tree(down, mid - 1, arr);
	root->right = set_tree(mid + 1, top, arr);
	
	return root;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
	struct TreeNode* ans = set_tree(0, numsSize - 1, nums);
	return ans;
}

