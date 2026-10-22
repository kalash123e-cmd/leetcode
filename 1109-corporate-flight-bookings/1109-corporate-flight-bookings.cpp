class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& arr, int n) {
        vector<int> res(n+1,0);
        for(int i = 0; i<arr.size(); i++){
            res[arr[i][0]-1] += arr[i][2];
            res[arr[i][1]] -= arr[i][2];
        }
        vector<int> ans(n,0);
        ans[0] = res[0];
        for(int i = 1; i<n; i++){
            ans[i] = res[i]+ans[i-1];
        }
        return ans;
    }
};