class Solution {
public:
    bool fun(TreeNode* root, long long& prev) {
        if (root == NULL) {
            return true;
        }
        bool r1 = fun(root->left, prev);
        // if (prev == -9223372036854775808) {
        //     prev = root->val;
        // } 
        // else {
            if (prev >= root->val) {
                return false;
            }
            prev = root->val;
        // }
        bool r2 = fun(root->right, prev);
        return r1 && r2;
    }
    bool isValidBST(TreeNode* root) {
        long long prev = -9223372036854775808;
        return fun(root, prev);
    }
};