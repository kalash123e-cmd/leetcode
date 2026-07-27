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
       return fun(root,0,0);
    }
};