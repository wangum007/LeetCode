
//Given the root of a binary tree, return the postorder traversal of its nodes' values.

int get_size(struct TreeNode* root_){
	if(root_ == NULL)
		return 0;
	else
		return 1 + get_size(root_->left) + get_size(root_->right);
}
void set_val(struct TreeNode* root_, int* arr, int* x){
	if(root_ == NULL)
		return;
	else{
		set_val(root_->left, arr, x);
		set_val(root_->right, arr, x);
		arr[*x] = root_->val;
		(*x)++;
	}
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans;
	int* x;
	int size = get_size(root);
	
	*returnSize = size;
	ans = malloc(size * sizeof(int));
	x = malloc(sizeof(int));
	
	*x = 0;
	set_val(root, ans, x);
	
	return ans;
}

