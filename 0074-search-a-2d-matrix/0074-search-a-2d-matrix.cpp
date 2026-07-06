class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        // int /
        int i = 0;
        int j = (arr.size() * arr[0].size()) -1;
        while(i<=j){
            long long mid = (i+j)/2;
            long long row = mid/arr[0].size();
            long long col = mid%arr[0].size();
            if(arr[row][col] == t){
                return true;
            }
            if(arr[row][col] < t){
                i = mid+1;
            }
            if(arr[row][col] > t){
                j = mid-1;
            }
        }
        return false;
    }
};