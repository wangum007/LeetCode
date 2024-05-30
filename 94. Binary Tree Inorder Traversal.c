
//Given the root of a binary tree, return the inorder traversal of its nodes' values.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int get_size(struct TreeNode* root_){
	if(root_ != NULL){
		return get_size(root_->left) + get_size(root_->right) + 1;
	}
	else{
		return 0;
	}
}
void set_val(struct TreeNode* root_, int* count, int* arr){
	if(root_ != NULL){
		set_val(root_->left, count, arr);
		arr[*count] = root_->val;
		(*count)++;
		set_val(root_->right, count, arr);
	}
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int size = get_size(root);
	int* ans = malloc(size * sizeof(int));
	int* count = malloc(sizeof(int));
	
	*returnSize = size;
	*count = 0;
	
	set_val(root, count, ans);
	free(count);
	
	return ans;
}

