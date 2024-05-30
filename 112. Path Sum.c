
//Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

//A leaf is a node with no children.

bool test_sum(struct TreeNode* root_, int test, int sum){
	if(root_ == NULL)
		return false;
	else{
		sum += root_->val;
		
		if((root_->left == NULL) && (root_->right == NULL)){
			return test == sum;
		}
		else
			return test_sum(root_->left, test, sum) || test_sum(root_->right, test, sum);
	}
}
bool hasPathSum(struct TreeNode* root, int targetSum) {
	if(root == NULL)
		return false;
	else
		return test_sum(root, targetSum, 0);
}

