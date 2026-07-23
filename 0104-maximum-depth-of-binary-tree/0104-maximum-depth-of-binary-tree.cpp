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
    int fun(TreeNode* root, int left, int right){
        if(root == NULL){
            return 0;
        }
        left = fun(root->left,left,right);
        right = fun(root->right,left,right);
        return 1+max(left,right);
    }
    int maxDepth(TreeNode* root) {
        // int res = 0;
       return fun(root,0,0);
    }
};