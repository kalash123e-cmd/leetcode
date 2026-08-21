class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count = 0;
        for(int i = 1; i<arr.size(); i++){
            if(arr[i] <= arr[i-1]){
                int x = arr[i];
                arr[i] = arr[i-1] + 1;
                count = count + arr[i] - x ;
            }
        }
        return count;
    }
};