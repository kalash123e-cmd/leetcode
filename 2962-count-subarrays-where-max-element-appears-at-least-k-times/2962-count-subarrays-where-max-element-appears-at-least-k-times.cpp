class Solution {
public:
    long long countSubarrays(vector<int>& arr, int k) {
        int mx = 0;
        for(int i = 0; i<arr.size(); i++){
            mx = max(mx,arr[i]);
        }
        int count = 0;
        long long res = 0;
        int j = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == mx){
                count++;
            }
            while(count == k){
                res += arr.size()-i;
                if(arr[j] == mx){
                    count--;
                }
                j++;

            }
        }
        return res;
    }
};