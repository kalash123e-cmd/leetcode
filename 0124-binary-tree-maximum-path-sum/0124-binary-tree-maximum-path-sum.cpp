class Solution {
public:
    int fun(TreeNode* root, int sum, int &res){
        if(root == NULL){
            return 0;
        }
        // sum = sum + root->val;
        // if(root->left == NULL && root->right == NULL){
        //     res = max(res,sum);
        //     return;
        // }
        int left = max(0,fun(root->left,sum,res));
        int right = max(0,fun(root->right,sum,res));
        // res = max(res,left+right + root->val);
        // int sum = root->val + max(left,right);
        // return sum;
        res = max(res,left+right+root->val);
        return root->val + max(left,right);

    }
    int maxPathSum(TreeNode* root) {
        // if(root->left == NULL && root->right == NULL){
        //     return root->val;
        // }
        int res = INT_MIN;
        int sum = 0;
        fun(root,sum,res);
        return res;
    }
};