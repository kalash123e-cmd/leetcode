class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        // vector<int> a;
        // vector<int> b;
        // int s1 = 0;
        // int s2 = 0;
        // for(int i = 0; i<k; i++){
        //     s1 = s1 + arr[i];
        //     a.push_back(s1);
        // }
        // int t = k;
        // int j = arr.size()-1;
        // while(j>=0 && t != 0){
        //     s2=s2+arr[j];
        //     b.push_back(s2);
        //     j--;
        //     t--;
        // }
        // int sum = 0;
        // int i = 0;
        // j = 0;
        // while(k!=0){

        // }
        // return max(a[a.size()-1],b[b.size()-1]);
        long long sum = 0;
        long long wsum = 0;
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
            if(i == arr.size()-k-1){
                wsum = sum;
            }
        }
        // return wsum;
        long long res = sum - wsum;
        int i = 0;
        int j = arr.size()-k;
        while(j<arr.size()){
            wsum += arr[j];
            wsum -= arr[i];
            res = max(res,sum-wsum);
            i++;
            j++;


        }
        return res;
    }
};