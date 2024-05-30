
//Given a binary tree, find its minimum depth.

//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

//Note: A leaf is a node with no children.

int minDepth(struct TreeNode* root) {
	if(!root)
		return 0;
    else if((root->right == NULL) && (root->left == NULL))
		return 1;
	
	int R, L;
	L = minDepth(root->left);
	R = minDepth(root->right);
	
	return 1 + ((R < L) ? R : L);
}

