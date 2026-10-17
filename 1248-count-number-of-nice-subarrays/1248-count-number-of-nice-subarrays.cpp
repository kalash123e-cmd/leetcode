class Solution {
public:
    int numberOfSubarrays(vector<int>& arr, int k) {
        int  j = 0;
        int count = 0;
        int a = 0;
        int b = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]%2 == 1){
                count++;
            }
            while(count == k){
                a += arr.size()-i;
                if(arr[j]%2 == 1){
                    count--;
                }
                j++;
            }
        }
        j = 0;
        count = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]%2 == 1){
                count++;
            }
            while(count == k+1){
                b += arr.size()-i;
                if(arr[j]%2 == 1){
                    count--;
                }
                j++;
            }
        }
        return abs(a-b);
    }
};