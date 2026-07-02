class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        // int l=-1;
        // int u=-1;
        int l = lower_bound(arr.begin(),arr.end(),target) - arr.begin();
        int u = upper_bound(arr.begin(),arr.end(),target) - arr.begin();
        
        if(l == arr.size() || arr[l]!= target){
            return {-1,-1};
        }
        return {l,u-1};

        
    }
};