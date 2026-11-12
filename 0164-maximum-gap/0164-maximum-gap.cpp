class Solution {
public:
    int maximumGap(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int res = 0;
        for(int i = 1; i<arr.size(); i++){
            res = max(res,arr[i]-arr[i-1]);
        }
        return res;
    }
};