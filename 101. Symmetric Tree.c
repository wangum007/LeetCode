
//Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

bool isSameTree(struct TreeNode* p_, struct TreeNode* q_) {
	if((p_ == NULL) && (q_ == NULL))
		return true;
	
	if((p_ == NULL) || (q_ == NULL))
		return false;
	
	if((p_->val == q_->val) && isSameTree(p_->left, q_->left) && isSameTree(p_->right, q_->right))
		return true;
	
	return false;
}
void tree_sw(struct TreeNode* root){
	if(root == NULL)
		return;
	
	struct TreeNode* tmp = root->left;
	
	root->left = root->right;
	root->right = tmp;
	
	tree_sw(root->left);
	tree_sw(root->right);
}
bool isSymmetric(struct TreeNode* root) {
	tree_sw(root->right);
	
	return isSameTree(root->right, root->left);
}

