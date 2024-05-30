
//Given a binary tree, determine if it is 
//height-balanced
//.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isBalanced(struct TreeNode* root) {
    int T = 1, i;
	
	int test_deep(struct TreeNode* root_){
		int R, L;
		
		if(!T)
			return 0;
		
		if(root_ == NULL)
			return 1;
		else{
			R = test_deep(root_->right);
			L = test_deep(root_->left);
			
			if((abs(R - L)) > 1){
				T = 0;
				return 0;
			}
			else
				return 1 + ((R > L) ? R : L);
		}
	}
	
	i = test_deep(root);
	
	if(T)
		return true;
	else
		return false;
}

