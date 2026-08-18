class Solution {
public:
    int minSubArrayLen(int t, vector<int>& arr) {
        
        int n = arr.size();
        int j = 0;
        int sum = 0;
        int len = INT_MAX;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            while (sum >= t) {
                len = min(len, i - j + 1);
                sum -= arr[j];
                j++;
            }
        }

       if(len == INT_MAX){
        return 0;
       }
       else{
        return len;
       }
        
    }
};