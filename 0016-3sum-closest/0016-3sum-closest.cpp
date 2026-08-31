class Solution {
public:
    int threeSumClosest(vector<int>& arr, int t) {
        sort(arr.begin(),arr.end());
        int res = INT_MAX;
        int ressum = 0;
        for(int i = 0; i<arr.size(); i++){
            int j = i+1;
            int k = arr.size()-1;
            // int res = INT_MAX;
            // int ressum = 0;
            while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                int prevres = res;
                res = min(res,abs(t - sum));
                if(res == 0){
                    return sum;
                }
                if(res != prevres){
                    ressum = sum;
                }
                if(sum < t){
                    j++;
                }
                if(sum > t){
                    k--;
                }
            }
        }
        return ressum;
    }
};