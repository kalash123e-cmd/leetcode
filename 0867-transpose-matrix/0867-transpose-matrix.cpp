class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> res(n, vector<int>(m));
        for(int i = 0; i < arr[0].size(); i++){
            for(int j = 0; j < arr.size(); j++){
                res[i][j] = arr[j][i];
            }
        }
        return res;
    }
};