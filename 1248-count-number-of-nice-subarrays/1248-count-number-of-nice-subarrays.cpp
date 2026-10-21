class Solution {
public:
    int numberOfSubarrays(vector<int>& arr, int k) {
        int j = 0;
        int count = 0;
        int x = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] % 2 == 1){
                count++;
            }
            while(i<arr.size() && count == k){
                if(arr[j]%2 == 1){
                    count--;
                }
                j++;
            }
            x = x + i-j;
        }
        j = 0;
        int y = 0;
        count = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] % 2 == 1){
                count++;
            }
            while(i<arr.size() && count == k+1){
                if(arr[j]%2 == 1){
                    count--;
                }
                j++;
            }
            y = y + i-j;
        }
        return abs(y-x);
    }
};