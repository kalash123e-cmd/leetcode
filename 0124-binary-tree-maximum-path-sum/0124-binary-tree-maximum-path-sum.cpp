class Solution {
public:
    int fun(TreeNode* root, int &res){
        if(root == NULL){
            return 0;
        }
        int left = max(0,fun(root->left,res));
        int right = max(0,fun(root->right,res));
        res = max(res,left+right+root->val);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        fun(root,res);
        return res;
    }
};