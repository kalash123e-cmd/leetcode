class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& arr, int left, int right) {
        int ans = 0;
        for(int i = 0; i<arr.size(); i++){
            int count = 0;
            int x = 1;
            while(i<arr.size() && arr[i] <= right){
                count = count+x;
                x++;
                i++;
            }
            ans = ans+count;
        }
        int res = 0;

        for(int i = 0; i<arr.size(); i++){
            int count = 0;
            int x = 1;
            while(i<arr.size() && arr[i] < left){
                count = count+x;
                x++;
                i++;
            }
            res = res+count;
        }
        return abs(ans-res);
    }
};