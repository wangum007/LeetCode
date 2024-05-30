
//Given the root of a binary tree, return its maximum depth.

//A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int test_deep(struct TreeNode* root_){
	int R, L;
	if(root_ == NULL)
		return 1;
	else{
		R = test_deep(root_->right);
		L = test_deep(root_->left);
		
		return 1 + ((R > L) ? R : L);
	}
}

int maxDepth(struct TreeNode* root) {
    return test_deep(root) - 1;
}

