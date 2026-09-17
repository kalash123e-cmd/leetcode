class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> f(1000000,0);
        vector<int> res;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            if(f[arr[i]] == 2){
                res.push_back(arr[i]);
            }
        }
        return res;
    }
};