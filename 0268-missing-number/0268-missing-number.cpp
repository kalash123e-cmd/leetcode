class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int res = arr.size();
        // int sum = 0;
        // int no = 0;
        // for(int i = 0; i<arr.size(); i++){
        //     sum = sum+arr[i];
        //     // no = no+(i-1);
        // }
        // for(int i = 0; i<=arr.size(); i++){
        //     no = no+i;
        // }
        // return no - sum;

        for(int i = 0; i<arr.size(); i++){
            res = res ^ i ^ arr[i];
        }
        return res;
    }
};