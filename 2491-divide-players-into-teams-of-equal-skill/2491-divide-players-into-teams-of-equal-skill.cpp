class Solution {
public:
    long long dividePlayers(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i = 1;
        int j = arr.size()-2;
        int s = arr[0]+arr[j+1];
        
        long long ch = arr[0]*arr[j+1];
        if(arr.size() == 2){
            return ch;
        }
        while(i<j){
            if(arr[i] + arr[j] != s){
                return -1;
            }
            ch += arr[i] * arr[j];
            i++;
            j--;
        }
        return ch;
    }
};