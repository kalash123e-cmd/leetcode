class Solution {
public:
    int minimumSumSubarray(vector<int>& arr, int l, int r) {
        int res = INT_MAX;
        for(int i = 0; i<arr.size(); i++){
            int sum = 0;
            for(int j = i; j<arr.size(); j++){
                sum += arr[j];
                if(j-i+1 >= l && j-i+1 <=r){
                    if(sum > 0){
                        res = min(res,sum);
                    }
                }
            }
        }
        if(res == INT_MAX){
            return -1;
        }
        return res;
    }
};