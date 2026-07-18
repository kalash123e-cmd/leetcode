/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool fun(TreeNode* ptr1, TreeNode* ptr2){
        if(ptr1 == NULL && ptr2 == NULL){
            return true;
        }
        if(ptr1 == NULL || ptr2 == NULL){
            return false;
        }
        if(ptr1->val != ptr2->val){
            return false;
        }
        bool r1 = fun(ptr1->left,ptr2->right);
        bool r2 = fun(ptr1->right,ptr2->left);
        return r1 && r2;
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* ptr1 = root;
        TreeNode* ptr2 = root;
        return fun(ptr1,ptr2);
    }
};