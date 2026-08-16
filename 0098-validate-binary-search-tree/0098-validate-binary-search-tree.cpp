class Solution {
public:
    void fun(TreeNode* root,vector<int> &temp){
        if(root == NULL){
            return;
        }
        fun(root->left,temp);
        temp.push_back(root->val);
        fun(root->right,temp);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> temp;
        fun(root,temp);
        for(int i = 0; i<temp.size()-1; i++){
            if(temp[i] >= temp[i+1]){
                return false;
            }
        }
        return true;

    }
};