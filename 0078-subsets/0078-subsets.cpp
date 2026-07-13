

class Solution {
public:
    void fun(vector<int>& arr,int n,int i, vector<int>& temp, vector<vector<int>>& res){
            if(i == n){
                res.push_back(temp);
                return;
            }
            fun(arr, n, i+1, temp, res);
            temp.push_back(arr[i]);
            fun(arr, n, i+1, temp, res);
            temp.pop_back();
}

    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int> temp;
        vector<vector<int>> res;
        // vector<vector<int>> res;
        int n = arr.size();
        // int i = 0;
        fun(arr,n,0,temp,res);
        return res;
        
    }
};