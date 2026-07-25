class Solution {
public:
    int fun(TreeNode* root,int &res){
        if(root == NULL){
            return 0;
        }
        int left = fun(root->left,res);
        int right = fun(root->right,res);
         res = max(res,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
         fun(root,res);
         return res;
    }
};