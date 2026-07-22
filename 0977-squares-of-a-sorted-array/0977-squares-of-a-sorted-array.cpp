class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        // int res;
        // int k;
        for(int i = 0; i<arr.size(); i++){
            arr[i] = arr[i]*arr[i];
        }
        sort(arr.begin(),arr.end());
        // for(int i = 0; i<arr.size(); i++){
        //     k = arr[i];
            return arr;
        
        
    }
};