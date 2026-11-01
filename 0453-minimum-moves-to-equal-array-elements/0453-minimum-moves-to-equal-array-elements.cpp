class Solution {
public:
    int minMoves(vector<int>& arr) {
        int mn = INT_MAX;
        for(int i = 0; i<arr.size(); i++){
            mn = min(mn,arr[i]);
        }
        int count = 0;
        for(int i = 0; i<arr.size(); i++){
            count += arr[i] - mn;
        }
        return count;
    }
};