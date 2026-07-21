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
    void fun(TreeNode* &res, TreeNode* root, int val){
        if(root == NULL){
            return;
        }
        if(root->val == val){
            res = root;
            return;
        }
        
        
        if(root->val < val){
            fun(res,root->right,val);
        }
        if(root->val > val){
            fun(res,root->left,val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* res = NULL ;
        fun(res, root,val);
        return res;
    }
};