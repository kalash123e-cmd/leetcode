class Solution {
public:
    void fun(TreeNode* root, vector<int>& res){
        if(root == NULL){
            return;
        }
        fun(root->left,res);
        res.push_back(root->val);
        fun(root->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        fun(root,res);
        return res;
    }
};