/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
        int height(TreeNode* root) {

        // Empty tree
        if (root == NULL) {
            return 0;
        }

        // Height of left subtree
        int left = height(root->left);

        // If left subtree is unbalanced
        if (left == -1) {
            return -1;
        }

        // Height of right subtree
        int right = height(root->right);

        // If right subtree is unbalanced
        if (right == -1) {
            return -1;
        }

        // Current node is unbalanced
        if (abs(left - right) > 1) {
            return -1;
        }

        // Return height
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) {
         return height(root) != -1;
    }
};
