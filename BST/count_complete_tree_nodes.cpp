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
    int countNodes(TreeNode* root) {
        // Base condition
        if (root == NULL) {
            return 0;
        }

        int leftheight = 0;
        int rightheight = 0;

        TreeNode* left = root;
        TreeNode* right = root;

        // Calculate left height
        while (left != NULL) {
            leftheight++;
            left = left->left;
        }

        // Calculate right height
        while (right != NULL) {
            rightheight++;
            right = right->right;
        }

        // Perfect binary tree
        if (leftheight == rightheight) {
            return (1 << leftheight) - 1;
        }

        // Otherwise count recursively
        return countNodes(root->left) + countNodes(root->right) + 1;
        
    }
};