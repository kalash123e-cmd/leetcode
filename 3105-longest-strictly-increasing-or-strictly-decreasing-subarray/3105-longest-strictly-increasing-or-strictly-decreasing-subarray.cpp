class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int res = 1;
        for(int i = 1; i<arr.size(); i++){
            int count = 1;
            while(i<arr.size() && arr[i-1]<arr[i]){
                count++;
                i++;
            }
            res = max(res,count);
        }
        for(int i = 1; i<arr.size(); i++){
            int count = 1;
            while(i<arr.size() && arr[i-1]>arr[i]){
                count++;
                i++;
            }
            res = max(res,count);
        }
        return res;
    }
};