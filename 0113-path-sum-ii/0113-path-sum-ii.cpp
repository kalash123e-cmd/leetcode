class Solution {
public:
    void fun(TreeNode* root, int t, int sum, vector<vector<int>> &res, vector<int> &temp){
        if(root == NULL){
            return;
        }
        sum += root->val;
        temp.push_back(root->val); 
        if(root->left == NULL && root->right == NULL){
            if(sum == t){
                res.push_back(temp);
            }
        }
        fun(root->left,t,sum,res,temp);
        fun(root->right,t,sum,res,temp);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(root,t,0,res,temp);
        return res;
    }
};