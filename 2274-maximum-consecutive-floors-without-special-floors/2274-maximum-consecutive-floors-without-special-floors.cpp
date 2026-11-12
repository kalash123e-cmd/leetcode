class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& arr) {
        // unordered_map<int,int> f;
        // for(int i = 0; i<arr.size(); i++){
        //     f[arr[i]]++;
        // }
        sort(arr.begin(),arr.end());
        // int j = 0;
        int res = max(arr[0]-b,t-arr.back());
        // int count = 0;
        for(int i = 1; i<arr.size(); i++){
            // count++;
            // if(j<arr.size() && i == arr[j]){
            //     j++;
            //     count = 0;
            //     continue;
            // }
            res = max(res,arr[i]-arr[i-1]-1);
        }
        return res;
    }
};