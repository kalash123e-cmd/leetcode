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
    void fun(TreeNode* root, int &sum, vector<int> &temp){
        if(root == NULL){
            return;
        }
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            long long i = temp.size()-1;
            long long d = 1;
            long long v = 0;
            while(i>=0){
                v = v + temp[i]*d;
                d = d*10;
                i--;
            }
            sum = sum+v;
        }
        fun(root->left,sum,temp);
        fun(root->right,sum,temp);
        temp.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        vector<int> temp;
        int sum = 0;
        fun(root,sum,temp);
        return sum;
    }
};