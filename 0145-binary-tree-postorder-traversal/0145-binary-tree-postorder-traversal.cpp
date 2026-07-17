class Solution {
public:
    void fun(TreeNode* root, vector<int>& res){
        if(root == NULL){
            return;
        }
        fun(root->left,res);
        
        fun(root->right,res);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        fun(root,res);
        return res;
    }
};