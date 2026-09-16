class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> res(10000,0);
        unordered_map<int, int> f;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        for(auto i : f){
            res[i.second]++;
            if(res[i.second] == 2){
                return false;
            }
        }
        return true;
    }
};