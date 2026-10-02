class Solution {
public:
    long long zeroFilledSubarray(vector<int>& arr) {
        long long res = 0;
        for(int i = 0; i<arr.size(); i++){
            long long count = 0;
            int k = 1;
            while(i < arr.size() && arr[i] == 0){
                count = count+k;
                k++;
                i++;
            }
            res = res+count;
        }
        return res;
    }
};