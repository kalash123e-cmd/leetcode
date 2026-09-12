class Solution {
public:
    int x[4] = {-1,1,0,0};
    int y[4] = {0,0,-1,1};
    bool valid(int m,int n,int i,int j){
        if(i>=m || i<0 || j>=n || j<0){
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& arr) {
        queue<pair<int,int>> q;
        int m = arr.size();
        int n = arr[0].size();
        int fresh = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(arr[i][j] == 1){
                    fresh++;
                }
                if(arr[i][j] == 2){
                    q.push({i,j});
                    arr[i][j] = -2;
                }
            }
        }
        int time = 0;
        while(!q.empty() && fresh > 0){
            time++;
            int s = q.size();
            while(s--){
                pair<int,int> p = q.front();
                q.pop();
                int i = p.first;
                int j = p.second;
                for(int k = 0; k<4; k++){
                    int r = i+x[k];
                    int c = j+y[k];
                    if(valid(m,n,r,c) && arr[r][c] == 1){
                        fresh--;
                        q.push({r,c});
                        arr[r][c] = -1;
                    }
                }
            }
        }
        if(fresh > 0){
            return -1;
        }
        return time;
    }
};