class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        // int i = 0;
        int j = k;
        double sum = 0;
        for(int i = 0 ;i<k; i++){
            sum += arr[i];
        }
        double avg = sum/k;
        double res = avg;
        int i = 1;
        
        while(j<arr.size()){
            sum = (sum - arr[i-1]) + arr[j];
            // sum += arr[j];
            avg = sum/k;
            res = max(res,avg), 
            j++;
            i++;
        }
        return res;
    }
};