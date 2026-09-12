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
    void dfs(vector<vector<char>>& arr, int n, int m, int i, int j){
        // vis[i][j] = 1;
        arr[i][j] = '0';
        for(int k = 0; k<4; k++){
            int row = i + x[k];
            int col = j + y[k];
            if(valid(row,col,n,m) && arr[row][col] == 'X' ){
                dfs(arr,n,m,row,col);
            }
        }
        return;
    }
    int countBattleships(vector<vector<char>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int res = 0;

        // BOOL 2D VECTOR BANAYA HAI//
        // vector<vector<bool>> vis(n);
        // for(int i = 0 ; i< n; i++){
        //     vector<bool> t(m,0);
        //     vis[i] = t;
        // }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(arr[i][j] == 'X' ){
                    dfs(arr,n,m,i,j);
                    res++;
                }
            }
        }
        return res;
    }
};