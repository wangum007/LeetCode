
//Given the root of a complete binary tree, return the number of the nodes in the tree.

//According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.

//Design an algorithm that runs in less than O(n) time complexity.


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    int TR(struct TreeNode* tr){
        if(tr == NULL){
            return 0;
        }
        else{
            return(TR(tr->right) + TR(tr->left) + 1);
        }
    }

    return TR(root);
}

