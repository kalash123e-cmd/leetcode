class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int k) {
        unordered_map<int , int> f;
        f[0] = 1;
        int sum = 0;
        int res = 0;

        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
            int q = sum - k;
            int freq = f[q];
            res += freq;
            f[sum]++; 
        }
        return res;
    }
};