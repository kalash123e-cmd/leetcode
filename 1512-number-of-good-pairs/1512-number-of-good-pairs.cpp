class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        vector<int> f(256,0);
        int count = 0;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            count = count + f[arr[i]]-1;
        }
        return count;
    }
};