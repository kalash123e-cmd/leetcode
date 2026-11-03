class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& arr) {
        vector<vector<int>> mat(n + 1, vector<int>(n + 1, 0));
        vector<vector<int>> res(n, vector<int>(n, 0));
        for(int i = 0; i<arr.size(); i++){
            mat[arr[i][0]][arr[i][1]]++;
            mat[arr[i][0]][arr[i][3]+1]--;
            mat[arr[i][2]+1][arr[i][1]]--;
            mat[arr[i][2]+1][arr[i][3]+1]++;
        }
        for(int i = 0; i<mat.size(); i++){
            // mat[0][i] = arr[0][i];
            for(int j = 1; j<mat[0].size(); j++){
                mat[j][i] = mat[j-1][i] + mat[j][i];
            }
        }
        for(int i = 0; i<mat.size(); i++){
            // mat[i][0] = arr[i][0];
            for(int j = 1; j<mat[0].size(); j++){
                mat[i][j] = mat[i][j-1] + mat[i][j];
            }
        }
        for(int i = 0; i<res.size(); i++){
            for(int j = 0; j<res[0].size(); j++){
                res[i][j] = mat[i][j];
            }
        }
        return res;
    }
};