class Solution {
public:
    bool isZeroArray(vector<int>& n, vector<vector<int>>& arr) {
        vector<int> diff(n.size()+1,0);
        for(int i = 0 ;i<arr.size(); i++){
            // if(n[arr[i][0]] != 0){
                diff[arr[i][0]]++;
            // }
            // if(n[arr[i][1]] != 0){
                diff[arr[i][1] + 1]--;
            // }
        }
        vector<int> res(n);
        res[0] = diff[0];
        if(res[0] < n[0]){
            return false;
        }
        for(int i = 1; i<n.size(); i++){
            res[i] = diff[i]+res[i-1];
            if(res[i] < n[i]){
                return false;
            }
        }
        return true;

    }
};