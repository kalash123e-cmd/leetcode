class Solution {
public:
    
    void fun(vector<vector<int>>& adj, int node, int c,bool &b,vector<int> &col){
        col[node] = c;
        for(int j = 0; j<adj[node].size(); j++){
            int n = adj[node][j];
            if(col[n] != -1 && col[n] == c){
                b = 0;
            }
            if(col[n] == -1){
                fun(adj,n,1-c,b,col);
            }
        }
        return;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        vector<int> col(adj.size(),-1);
        int c = 1;
        bool b = 1;
        for(int i = 0; i <adj.size(); i++){
            if(col[i] == -1){
                fun(adj,i,c,b,col);
            }
        }
        // fun(adj,0,c,b,col);
        return b;

    }
};