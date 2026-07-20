class Solution {
public:
    int fun(TreeNode* &res, TreeNode* root, TreeNode* p, TreeNode* q, int left, int right, int self, int total){
        if(root == NULL){
            return 0;
        }
        left = fun(res,root->left,p,q,left,right,self,total);
        right = fun(res,root->right,p,q,left,right,self,total);
        if(root == p || root == q){
            self = 1;
        }
        total = self + left + right;
        if(total == 2 && res == NULL){
            res = root;
        }
        return total;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = NULL;
        fun(res,root,p,q,0,0,0,0);
        return res;
    }
};