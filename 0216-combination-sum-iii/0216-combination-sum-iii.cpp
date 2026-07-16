class Solution {
public:
    void fun(vector<vector<int>>& res, vector<int>& temp, int i, int k, int n, int sum){
        if(temp.size() == k && sum == n){
            res.push_back(temp);
            return;
        }
        if(i > 9 || sum > n){
            return;
        }
        temp.push_back(i);
        sum += i;
        fun(res,temp,i+1,k,n,sum);
        temp.pop_back();
        sum-= i;
        fun(res,temp,i+1,k,n,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(res,temp,1,k,n,0);
        return res;
    }
};