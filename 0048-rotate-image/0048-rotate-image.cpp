class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>> res(n,vector<int>(n));
        
        for(int i = 0 ; i<n; i++){
            for(int j = i+1; j<n; j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i = 0 ; i<n; i++){
            reverse(arr[i].begin(),arr[i].end());
        }
    }
};