class Solution {
public:
    int count = 0;
    pair<int,int> fun(TreeNode* root){
        if(root == NULL){
            return {0,0};
        }
        
        pair<int,int> ls = fun(root->left);
        // n++;
        pair<int ,int> rs = fun(root->right);
        // n++;
        int sum = ls.first+rs.first+root->val;
        int nc = ls.second+rs.second+1;
        if(sum/nc == root->val){
            count++;
        }
        return {sum,nc};
        
    }
    int averageOfSubtree(TreeNode* root) {
        // int res = 0;
        // int sum = 0;
        // int avg = 0;
        // int n = 0;
        fun(root);
        return count;
    }
};