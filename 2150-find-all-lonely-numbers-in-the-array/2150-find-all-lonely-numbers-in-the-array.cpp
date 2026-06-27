class Solution {
public:
    vector<int> findLonely(vector<int>& arr) {
        unordered_map<int,int> f;
        vector<int> res;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            f[arr[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(f[arr[i]] == 1 && f[arr[i]-1] == 0 && f[arr[i]+1] == 0){
                res.push_back(arr[i]);
            }
        }
        return res;
    }
};