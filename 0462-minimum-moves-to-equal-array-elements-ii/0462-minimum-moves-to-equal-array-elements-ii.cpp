class Solution {
public:
    int minMoves2(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mid = arr[arr.size()/2];
        int count = 0;
        for(int i = 0 ;i<arr.size(); i++){
            count += abs(mid-arr[i]);
        }
        return count;
    }
};