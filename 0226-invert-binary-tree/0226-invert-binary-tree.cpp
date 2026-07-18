class Solution {
public:
    void fun(TreeNode* root){
        if(root == NULL){
            return;
        }
        swap(root->left , root->right);
        fun(root->left);        
        fun(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        fun(root);
        return root;
    }
};