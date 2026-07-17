class Solution {
public:
    void fun(TreeNode* root, vector<int>& res){
        if(root == NULL){
            return;
        }
        res.push_back(root->val);
        fun(root->left,res);
        
        fun(root->right,res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        fun(root,res);
        return res;
    }
};