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
   // Check whether two trees are exactly same
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Both are NULL
        if (p == NULL && q == NULL) {
            return true;
        }

        // One is NULL and other is not
        if (p == NULL || q == NULL) {
            return false;
        }

        // Values are different
        if (p->val != q->val) {
            return false;
        }

        // Check left and right subtrees
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
         // If root becomes NULL, subtree cannot be found
        if (root == NULL) {
            return false;
        }

        // First check if current tree is same as subRoot
        if (isSameTree(root, subRoot)) {
            return true;
        }

        // Otherwise search in left and right subtree
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
        
    }
};
