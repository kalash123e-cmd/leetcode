class Solution {
public:
    stack<TreeNode*> asc;
    stack<TreeNode*> dsc;
    TreeNode* getsmall(){
        if(asc.empty()){
            return NULL;
        }
        TreeNode* small = asc.top();
        asc.pop();
        TreeNode* rightchild = small->right;
        while(rightchild != NULL){
            asc.push(rightchild);
            rightchild = rightchild->left;
        }
        return small;
    }
    TreeNode* getbig(){
        if(dsc.empty()){
            return NULL;
        }
        TreeNode* big = dsc.top();
        dsc.pop();
        TreeNode* leftchild = big->left;
        while(leftchild != NULL){
            dsc.push(leftchild);
            leftchild = leftchild->right;
        }
        return big;
    }
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL){
            return false;
        }
        TreeNode* t = root;
        while(t != NULL){
            asc.push(t);
            t = t->left;
        }
        t = root;
        while(t != NULL){
            dsc.push(t);
            t = t->right;
        }
        TreeNode* i = getsmall();
        TreeNode* j = getbig();
        while(i != NULL && i != NULL && i!=j && i->val <= j->val){
            int sum = i->val + j->val;
            if(sum == k){
                return true;
            }
            if(sum < k){
                i = getsmall();
            }
            else{
                j = getbig();
            }
        }
        return false;
    }
};