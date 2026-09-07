class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // int x = 1;
        // vector<vector<int>> arr(n,vector<int>(n));
        // for(int i = 0; i<arr.size(); i++){
        //     for(int j = 0; j<arr[0].size(); j++){
        //         arr[i][j] = x;
        //         x++;
        //     }
        // }
        vector<vector<int>> ans(n,vector<int>(n));
        int r = ans.size();
        int c = ans[0].size();
        // vector<int> res;
        
        int minc = 0;
        int maxc = c-1;
        int minr = 0;
        int maxr = r-1;
        int count = 0;
        int y = 1;
        while(count<r*c){
            for(int i = minc; i<=maxc && count<r*c; i++){
                // res.push_back(arr[minr][i]);
                ans[minr][i] = y;
                y++;
                count++;
            }
            minr++;
            for(int i = minr; i<=maxr && count<r*c; i++){
                // res.push_back(arr[i][maxc]);
                ans[i][maxc] = y;
                y++;
                count++;
            }
            maxc--;
            for(int i = maxc; i>=minc && count<r*c; i--){
                // res.push_back(arr[maxr][i]);
                ans[maxr][i] = y;
                y++;
                count++;
            }
            maxr--;
            for(int i = maxr; i>=minr && count<r*c; i--){
                // res.push_back(arr[i][minc]);
                ans[i][minc] = y;
                y++;
                count++;
            }
            minc++;
        }
        // vector<vector<int>> ans(n,vector<int>(n));
        // int k = 0;
        // for(int i = 0; i<arr.size(); i++){
        //     for(int j = 0; j<arr.size(); j++){
        //         ans[i][j] = res[k];
        //         k++;
        //     }
        // }
        return ans;
    }
};