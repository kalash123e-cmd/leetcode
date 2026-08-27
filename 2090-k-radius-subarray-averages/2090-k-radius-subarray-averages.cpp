class Solution {
public:
    vector<int> getAverages(vector<int>& arr, int k) {
        vector<int> res(arr.size(),-1);
        // if(k > arr.size()){
        //     return {-1};
        // }
        if (2LL * k + 1 > arr.size()) {
            return res;
        }
        
        long long sum = 0;
        long long x = k;
        for(long long i = 0; i<2*x+1; i++){
            sum = sum+arr[i];
        }
        long long avg = sum/(2*k+1);
        res[x] = avg;
        x++;
        long long i = 1;
        long long j = 2*k+1;


        
        while(j < arr.size()){
            sum = sum - arr[i-1] + arr[j];
            avg = sum / (2*k+1);
            res[x] = avg;
            x++;
            i++;
            j++;
        }
        return res;
    }
};