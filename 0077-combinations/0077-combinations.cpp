class Solution {
public:
    void fun(vector<vector<int>>& res,int i, int n, int k, vector<int>& temp, bool count){
        if(temp.size() == k){
            res.push_back(temp);
            return;
        }
        if(i > n){
            return;
        }
        temp.push_back(i);
        fun(res,i+1,n,k,temp,false);
        temp.pop_back();
        fun(res,i+1,n,k,temp,false);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        bool count;
        fun(res,1,n,k,temp,false);
        return res;
    }
};