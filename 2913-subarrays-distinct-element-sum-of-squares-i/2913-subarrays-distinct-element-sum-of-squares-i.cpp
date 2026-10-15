class Solution {
public:
    int sumCounts(vector<int>& arr) {
        long long res = 0;
        
        for(int i = 0; i<arr.size(); i++){
            unordered_map<int,int> f;
            for(int j = i; j<arr.size(); j++){
                f[arr[j]]++;
                res += f.size()*f.size();
            }
        }
        return res;
    }
};