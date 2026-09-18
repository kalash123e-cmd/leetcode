class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        unordered_map<int,int> f;
        long long sum = 0;
        long long res = 0;
        for(int i = 0; i<k; i++){
            sum +=arr[i];
            f[arr[i]]++;
        }
        if(f.size() == k){
            res = sum;
        }
        int i = 0; int j = k;
        while(j<arr.size()){
            f[arr[j]]++;
            f[arr[i]]--;
            if(f[arr[i]] == 0){
                f.erase(arr[i]);
            }
            sum += arr[j];
            sum -= arr[i];
            if(f.size() == k){
                res = max(res,sum);
            }
            i++;
            j++;
        }
        return res;
    }
};