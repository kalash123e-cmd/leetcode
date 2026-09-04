class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        long long mx = LLONG_MIN;
        // long long mn = LLONG_MAX;
        // for(int i = 0; i<arr.size(); i++){
        //     mn = min((long long)arr[i],mn);
        // }
        for(int i = 0; i<arr.size(); i++){
            long long mn = *min_element(arr.begin() + i, arr.begin() + arr.size() );
            mx = max(mx,(long long)arr[i]);
            if(mx - mn <= k){
                return i;
            }
        }
        return -1;
    }
    
};