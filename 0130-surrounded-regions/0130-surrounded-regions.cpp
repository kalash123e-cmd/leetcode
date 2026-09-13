class Solution {
public:
    
    int x[4] = {-1,1,0,0};
    int y[4] = {0,0,-1,1};
    bool valid(int m,int n,int i,int j){
        // count = 0;
        if(i>=m || i<0 || j>=n || j<0){
            // count = 1;
            return false;
        }
        return true;
    }
    void dfs(vector<vector<char>>& arr, int m, int n, int i, int j){
        
        arr[i][j] = '#'; 
        // q.push({i,j});
        for(int k = 0; k<4; k++){
            int r = i+x[k];
            int c = j+y[k];
            // if(!valid(m,n,r,c)){
            //     count = 1;
            // }
            if(valid(m,n,r,c) && arr[r][c] == 'O'){
                
                dfs(arr,m,n,r,c);
                
            }
        }
        return;
    }
    void solve(vector<vector<char>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        
        // int res = 0;

        // // BOOL 2D VECTOR BANAYA HAI//
        // vector<vector<bool>> vis(n);
        // for(int i = 0 ; i< n; i++){
        //     vector<bool> t(m,0);
        //     vis[i] = t;
        // }
        for(int i = 0; i<m; i++){
            if(arr[i][0] == 'O'){
                dfs(arr,m,n,i,0);
            }
            if(arr[i][n-1] == 'O'){
                dfs(arr,m,n,i,n-1);
            }
        }
        // for(int i = 0; i<m; i++){
        //     if(arr[i][n-1] == 'O'){
        //         dfs(arr,m,n,i,n-1);
        //     }
        // }
        for(int j = 0; j<n; j++){
            if(arr[0][j] == 'O'){
                dfs(arr,m,n,0,j);
            }
            if(arr[m-1][j] == 'O'){
                dfs(arr,m,n,m-1,j);
            }
        }
        // for(int j = 0; j<n; j++){
            
        // }
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(arr[i][j] == 'O'){
                    arr[i][j] = 'X';
                }
                else{
                    if(arr[i][j] == '#'){
                    arr[i][j] = 'O';
                }
                }
                
            }
        }
    }
};