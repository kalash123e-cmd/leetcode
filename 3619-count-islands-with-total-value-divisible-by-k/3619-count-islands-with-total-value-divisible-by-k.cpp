class Solution {
public:
    int x[4] = {-1,1,0,0};
    int y[4] = {0,0,-1,1};

    //BAS CHECK KARNE KE LIYE KI KAHI GRID KE BAHAR TO NHI AA RHE//
    bool valid(int i, int j, int n, int m){
        if(i<0 || i>= n || j<0 || j>=m){
            return false;
        }
        return true;
    }

    //SAARE '1' YA ISLANDS CHECK KARNE KE LIYE BY DFS//
    void dfs(vector<vector<int>>& arr, vector<vector<bool>>& vis, int n, int m, int i, int j, long long &count){
        vis[i][j] = 1;
        count += arr[i][j];
        for(int k = 0; k<4; k++){
            int row = i + x[k];
            int col = j + y[k];
            if(valid(row,col,n,m) && arr[row][col] != 0 && vis[row][col] == 0){
                dfs(arr,vis,n,m,row,col,count);
            }
        }
        return;
    }
    int countIslands(vector<vector<int>>& arr,int k) {
        int n = arr.size();
        int m = arr[0].size();
        int res = 0;

        // BOOL 2D VECTOR BANAYA HAI//
        vector<vector<bool>> vis(n);
        for(int i = 0 ; i< n; i++){
            vector<bool> t(m,0);
            vis[i] = t;
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(arr[i][j] != 0 && vis[i][j] == 0){
                    long long count = 0;
                    dfs(arr,vis,n,m,i,j,count);
                    // res = max(count,res);
                    if(count%k == 0){
                        res++;
                    }
                }
            }
        }
        return res;
    }
};