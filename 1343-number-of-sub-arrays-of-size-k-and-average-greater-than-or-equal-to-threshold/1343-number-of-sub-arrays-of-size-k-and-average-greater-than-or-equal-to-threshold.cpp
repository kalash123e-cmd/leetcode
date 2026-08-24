class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int count = 0;
        int sum = 0;
        for(int i = 0; i<k; i++){
            sum+=arr[i];

        }
        int avg = sum/k;
        if(avg >= t){
            count++;
        }
        int i = 1;
        int j = k;
        while(j<arr.size()){
            avg = 0;
            sum = (sum + arr[j]) - arr[i-1]; 
            avg = sum/k;
            if(avg >= t){
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};