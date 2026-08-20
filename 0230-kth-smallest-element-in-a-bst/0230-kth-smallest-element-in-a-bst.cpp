class Solution {
public:
    void fun(TreeNode* root, int &n,int k, int &res){
        if(root == NULL){
            return ;
        }
        fun(root->left,n,k,res);
        if(n == k){
            res = root->val;
        }
        n++;
        fun(root->right,n,k,res);


    }
    int kthSmallest(TreeNode* root, int k) {
        int n = 1;
        int res = -1;
        fun(root,n,k,res);
        return res;
    }
};