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
    vector<vector<int>> levelOrder(TreeNode* root) {

        //here we created the 2D array to save the ans
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }
        queue <TreeNode*>q;
        q.push(root);

        //now iterate the loop towards the queue nt empty
        while(!q.empty()){
            //here level for the add the separte node which are the siblings
            vector<int> level;
            //here we iterate the loop to the all queue which we are pysh
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*temp=q.front();
                q.pop();

                level.push_back(temp->val);

                if(temp->left!=NULL){
                    q.push(temp->left);
                }

                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            ans.push_back(level);
        }
        return ans;        
    }
};