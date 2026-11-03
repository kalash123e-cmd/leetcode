class Solution {
public:
    int minMoves(vector<int>& arr) {
        int mx = *max_element(arr.begin(),arr.end());
        int count = 0;
        for(int i = 0; i<arr.size(); i++){
            count += mx-arr[i];
        }
        return count;
    }
};