class Solution {
public:
    int sum(int n){
        int s = 0;
        while(n != 0){
            s += n%10;
            n = n/10;
        }
        return s;
    }
    int smallestIndex(vector<int>& arr) {
        // int idx = -1;
        for(int i = 0; i<arr.size(); i++){
            if(sum(arr[i]) == i){
                return i;
            }
        }
        return -1;
    }
};