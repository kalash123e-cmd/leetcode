class Solution {
public:
    long long maxAlternatingSum(vector<int>& arr) {
        for(int i = 0; i<arr.size(); i++){
            arr[i] = abs(arr[i]);
        }
        sort(arr.begin(),arr.end());
        int count = 0;
        long long sum = 0;
        int i = 0;
        int j = arr.size()-1;
        while(count < arr.size()){
            count++;
            if(count%2 != 0){
                sum += arr[j]*arr[j];
                j--;
            }
            else{
                sum -= arr[i]*arr[i];
                i++;
            }
        }
        return sum;
    }
};