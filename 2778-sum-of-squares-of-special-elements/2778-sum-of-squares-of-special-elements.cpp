class Solution {
public:
    int sumOfSquares(vector<int>& arr) {
        long long sum = 0;
        // int n = arr.size();
        for(int i = 0; i<arr.size(); i++){
            if(arr.size() % (i+1) == 0){
                sum += arr[i]*arr[i];
            }
        }
        return sum;
    }
};