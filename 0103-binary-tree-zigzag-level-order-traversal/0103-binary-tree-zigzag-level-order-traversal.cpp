class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int count = 1;
        if(root == NULL){
            return{};
        }
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int lvl = q.size();
            int first = 0;
            int last = lvl-1;
            vector<int> temp(lvl);
            while(lvl--){
                TreeNode* t = q.front();
                q.pop();
                
                if(count%2 != 0){
                    temp[first] = t->val;
                    first++;
                }
                else{
                    temp[last] = t->val;
                    last--;
                }
                if(t->left != NULL){
                    q.push(t->left);
                }
                if(t->right != NULL){
                    q.push(t->right);
                }
            }
            res.push_back(temp);
            count++;
        }
        return res;
    }
};