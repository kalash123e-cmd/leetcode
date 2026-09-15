class Solution {
public:
    int maximumUniqueSubarray(vector<int>& arr) {
        vector<int> f(100000,0);
        int res = 0;
        int sum = 0;
        int j = 0;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            sum += arr[i];
            while( f[arr[i]] > 1){
                sum -= arr[j];
                f[arr[j]]--;
                j++;
            }
            res = max(res,sum);
        }
        return res;
    }
};