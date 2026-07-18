class Solution {
public:
    bool fun(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL){
            return true;
        }
        if(p == NULL || q == NULL){
            return false;
        }
        if(p->val != q->val){
            return false;
        }
        bool r1 = fun(p->left,q->left);
        bool r2 = fun(p->right,q->right);
        return r1 && r2;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return fun(p,q);
    }
};