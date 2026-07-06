class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        int row = arr.size() - 1;
        int col = 0;
        while(col < arr[0].size() && row >= 0){
            int mid = arr[row][col];
            if(mid == t){
                return 1;
            }
            if(mid > t){
                row--;
            }
            if(mid < t){
                col++;
            }
        }
        return 0;
    }
};