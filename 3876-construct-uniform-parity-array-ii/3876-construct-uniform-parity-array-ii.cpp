class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr[0] % 2 != 0){
            int j = 0;
            for(int i = 1; i<arr.size(); i++){
                long long x = arr[i];
                if(x % 2 == 0){
                    if((x-arr[j]) % 2 == 0){
                        return false;
                    }
                }
            }
        }
        else{
            int j = 0;
            for(int i = 1; i<arr.size(); i++){
                long long x = arr[i];
                if(x % 2 != 0){
                    if((x-arr[j]) % 2 != 0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};