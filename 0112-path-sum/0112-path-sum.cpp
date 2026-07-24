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
    void fun(TreeNode* root, int t, int sum, bool &ans){
        if(root == NULL){
            
            return ;
        }
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            if(sum == t){
                ans = true;
            }
                
                return;
            }
        
        
        fun(root->left, t, sum,ans);
        
        // sum -= root->val;
        fun(root->right,t,sum,ans);
        // return sum;
        
    }
    bool hasPathSum(TreeNode* root, int t) {
        bool ans = false;
        fun(root,t,0,ans);
        return ans;
    }
};