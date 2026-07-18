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
    void fun(TreeNode* root){
        if(root == NULL){
            return;
        }
        swap(root->left , root->right);
        fun(root->left);
        // swap(inv->right , root->left);
        
        fun(root->right);
        // swap(inv , root);

    }
    TreeNode* invertTree(TreeNode* root) {
        // TreeNode* inv = root;
        fun(root);
        return root;
    }
};