class Solution {
public:
    bool fun(TreeNode* root,vector<int> &temp, long long &prev){
        if(root == NULL){
            return true;
        }
        bool r1 =  fun(root->left,temp,prev);
        // temp.push_back(root->val);
        if(prev == 1000000000){
            prev = root->val;
        }
        else{
            if(prev >= root->val){
                return false;
            }
            prev = root->val;
        }
        bool r2 =  fun(root->right,temp,prev);
        return r1 && r2;
        
    }
    bool isValidBST(TreeNode* root) {
        vector<int> temp;
        long long prev = 1000000000;
        return fun(root,temp,prev);
        // for(int i = 0; i<temp.size()-1; i++){
        //     if(temp[i] >= temp[i+1]){
        //         return false;
        //     }
        // }
        // return true;

    }
};