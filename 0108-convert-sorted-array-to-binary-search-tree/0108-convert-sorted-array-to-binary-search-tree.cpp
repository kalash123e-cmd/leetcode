class Solution {
public:
    TreeNode* fun(vector<int>& arr, int h, int l){
        if(l>h){
            return NULL;
        }
        int mid = l + (h - l) / 2;
        TreeNode* node = new TreeNode(arr[mid]);
        node->left = fun(arr,mid-1,l);
        node->right = fun(arr,h,mid+1);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        int l = 0;
        int h = arr.size()-1;
        // int mid = (h+l)/2;
        return fun(arr,h,l);
    }
};