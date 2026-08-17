class Solution {
public:
    // int idx = 0;
    // unordered_map<int,int> f;
    TreeNode* fun(vector<int>& pre,int l,int h, unordered_map<int,int> &f, int &idx){
        if(l>h){
            return NULL;
        }
        TreeNode* node = new TreeNode(pre[idx]);
        idx++;
        int id = f[node->val];
        node->left = fun(pre,l,id-1,f,idx);
        node->right = fun(pre,id+1,h,f,idx);
        return node;
    }

    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        unordered_map<int,int> f;
        for(int i = 0 ; i<in.size(); i++){
            f[in[i]] = i;
        }
        int l = 0;
        int h = in.size()-1;
        int idx = 0;
        return fun(pre,l,h,f,idx);
    }
};