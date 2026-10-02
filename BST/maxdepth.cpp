class Solution {
public:
    int maxDepth(TreeNode* root) {
                // Base condition
        if (root == NULL) {
            return 0;
        }

        // Find depth of left subtree
        int left = maxDepth(root->left);

        // Find depth of right subtree
        int right = maxDepth(root->right);

        // Current node + maximum of left/right
        return 1 + max(left, right);
        
    }
};