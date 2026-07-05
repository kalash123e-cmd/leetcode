class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        
        for(int i = 0; i<arr.size(); i++){
            int j = 0;
        int k = arr[0].size()-1;
            while(j<=k){
                int mid = (j+k)/2;
                if(arr[i][mid] == t){
                    return true;
                }
                if(arr[i][mid] < t){
                    j = mid+1;
                    continue;
                }
                else{
                    k = mid-1;
                    continue;
                }
            }
        }
        return false;
    }
};