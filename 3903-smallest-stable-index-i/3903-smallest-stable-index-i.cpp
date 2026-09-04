class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        // vector<int> a(arr.size());
        vector<int> b(arr.size());
        int mn = INT_MAX;
        int mx = INT_MIN;
        // for(int i = 0; i<arr.size(); i++){
        //     mx = max(arr[i],mx);
        //     a[i] = mx;
        // }
        for(int i = arr.size()-1; i>=0; i--){
            mn = min(arr[i],mn);
            b[i] = mn;
        }
        for(int i = 0; i<arr.size(); i++){
            mx = max(arr[i], mx);
            if(mx-b[i] <= k){
                return i;
            }
        }
        return -1;
    }
};