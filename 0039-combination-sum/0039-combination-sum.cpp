class Solution {
public:
    void fun(vector<int>& arr, int t, int i, vector<vector<int>>& res, vector<int>& temp, int sum){
        if(i == arr.size()){
            if(sum == t){
                res.push_back(temp);
            }
            return;
        }
        fun(arr,t, i+1,res,temp,sum);
        if(sum + arr[i] <= t){
            temp.push_back(arr[i]);
            sum += arr[i];
            fun(arr,t,i,res,temp,sum);
            temp.pop_back();
            sum -= arr[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(arr,t,0,res,temp,0);
        return res;
    }
};