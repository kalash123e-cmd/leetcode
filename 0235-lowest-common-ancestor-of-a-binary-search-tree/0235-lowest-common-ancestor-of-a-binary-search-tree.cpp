class Solution {
public:
    void fun(TreeNode* &res, TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == NULL){
            return;
        }
        if(root == p || root == q){
            res = root;
            return;
        }
        if(root->val < p->val){
            fun(res,root->right,p,q);
            return;
        }
        if(root->val > q->val){
            fun(res,root->left,p,q);
            return;
        }
        if(root->val < q->val && root->val > p->val){
            res = root;
            return;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = NULL;
        if(p->val < q->val){
            fun(res,root,p,q);
        }
        if(p->val > q->val){
            fun(res,root,q,p);
        }
        return res;
    }
};