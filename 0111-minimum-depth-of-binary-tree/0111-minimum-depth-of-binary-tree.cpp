class Solution {
public:
    int fun(TreeNode* root, int left, int right){
        
        if(root == NULL){
            return 0;
        }
        left = fun(root->left,left,right);
        right = fun(root->right,left,right);
        if(root->left == NULL || root->right == NULL){
            return 1+max(left,right);
        }
        else{
            return 1+min(left,right);
        }
    }
    int minDepth(TreeNode* root) {
       return fun(root,0,0);
    }
};