class Solution {
public:
    int fun(TreeNode* t, TreeNode* root, int left, int right){
        
        if(root == NULL){
            return 0;
        }
        left = fun(t,root->left,left,right);
        right = fun(t,root->right,left,right);
        if(root->left == NULL || root->right == NULL){
            return 1+max(left,right);
        }
        else{
            return 1+min(left,right);
        }
    }
    int minDepth(TreeNode* root) {
        TreeNode* t = root;
       return fun(t,root,0,0);
    }
};