class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int i = 0;
        int j = 0;
        int n = arr.size();
        int count = 0;
        int res = 0;
        
        while(i<n){
            if(arr[i] == 1 ){
                // res = count;
                count++;
                res = max(res,count);
                i++;
            }
            else{
                i++;
                count = 0;
            }
        }
        return res;
    }
};