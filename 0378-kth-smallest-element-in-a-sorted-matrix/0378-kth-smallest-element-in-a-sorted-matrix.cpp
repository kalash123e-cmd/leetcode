int fun(vector<vector<int>>& arr, int n, int m, int mid){
    int row = n-1;
    int col = 0;
    int count = 0;
    while(row >=0 && col < m){
        if(arr[row][col] <= mid){
            count = count + row + 1;
            col++;
        }
        else{
            row--;
        }
    }
    return count;
}

class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        int m = arr[0].size();
        int low = arr[0][0];
        int high = arr[n-1][m-1];
        int res = -1;
        while(low<=high){
            int mid = (low+high)/2;
            int ans = fun(arr,n,m,mid);
            if(ans<k){
                low = mid+1;
            }
            else{
                res = mid;
                high = mid-1;
            }
        }
        return res;
    }
};