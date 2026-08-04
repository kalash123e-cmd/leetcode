class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        unordered_map<int,int> f;
        vector<int> res;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        int mn = INT_MAX;
        int mx = 0;
        for(int i = 0; i<arr.size(); i++){
            mn = min(arr[i],mn);
            mx = max(arr[i],mx);
        }
        for(int i = mn; i<=mx; i++){
            if(f[i] != 1){
                res.push_back(i);
            }
        }
        return res;
    }
};