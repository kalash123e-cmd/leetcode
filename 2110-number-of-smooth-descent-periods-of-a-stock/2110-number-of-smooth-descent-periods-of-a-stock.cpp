class Solution {
public:
    long long getDescentPeriods(vector<int>& arr) {
        long long res = 1;
        long long count = 1;
        for(int i = 1; i<arr.size(); i++){
            // long long count = 1;
            // int k = 2;
            // while(i < arr.size() && arr[i-1]-arr[i] == 1){
            //     count += k;
            //     k++;
            //     i++;
            // }
            if(arr[i-1]-arr[i] == 1){
                count++;
            }
            else{
                count = 1;
            }
            // if(k >2){
            //     i--;
            // }
            // i--;
            // if(k>2){
            //     res = res+count - 1;
            // }
            // else{
            //     res = res+count;
            // }
            res = res+count;
        }
        return res;
    }
};