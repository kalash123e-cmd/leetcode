class Solution {
public:
    bool safe(int row, vector<string> &board, int i, int n){
        for(int j = 0; j<n; j++){
            if(board[row][j] == 'Q'){
                return false;
            }
        }
        for(int j = 0; j<row; j++){
            if(board[j][i] == 'Q'){
                return false;
            }
        }
        int j = row-1;
        int k = i-1;
        while(j>=0 && k >= 0){
            if(board[j][k] == 'Q'){
                return false;
            }
            j--;
            k--;
        }
        j = row-1;
        k = i+1;
        while(j>=0 && k<n){
            if(board[j][k] == 'Q'){
                return false;
            }
            j--;
            k++;
        }
        return true;
    }
    void fun(vector<string> &board ,int &ans, int row, int n){
        if(row == n){
            ans++;
            return;
        }
        for(int i = 0; i<n; i++){
            if(safe(row,board,i,n)){
                board[row][i] = 'Q';
                fun(board,ans,row+1,n);
                board[row][i] = '.';
            }
        }
        return;
    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        int ans = 0;
        fun(board,ans,0,n);
        return ans;
    }
};