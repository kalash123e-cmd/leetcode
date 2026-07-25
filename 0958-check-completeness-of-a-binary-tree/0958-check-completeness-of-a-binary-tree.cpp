class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int count = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if(t == NULL){
                count++;
            }
            else{
                if(count > 0){
                    return false;
                }
                q.push(t->left);
                q.push(t->right);
            }
        }
        return true;
    }
};