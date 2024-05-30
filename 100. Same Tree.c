
//Given the roots of two binary trees p and q, write a function to check if they are the same or not.

//Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool test_tree(struct TreeNode* p_, struct TreeNode* q_){
	if((p_ == NULL) && (q_ == NULL))	//	nodes are both NULL, dont need to compair more, return
		return true;
	
	if((p_ == NULL) || (q_ == NULL))	//	2 NULL case has checked, if some node still NULL, 2 node is not same
		return false;
	
	if(p_->val != q_->val)
		return false;
	
	return test_tree(p_->left, q_->left) && test_tree(p_->right, q_->right);
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
	return test_tree(p, q);
}

