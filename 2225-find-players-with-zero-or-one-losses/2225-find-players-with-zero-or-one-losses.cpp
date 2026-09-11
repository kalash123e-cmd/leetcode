class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& arr) {
        unordered_map<int,int> f;
        vector<int> nl;
        vector<int> ol;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i][1]]++;
        }
        for(int i = 0; i<arr.size(); i++){
            if(f[arr[i][1]] == 1){
                ol.push_back(arr[i][1]);
                
            }
            if(f[arr[i][0]] == 0){
                nl.push_back(arr[i][0]);
                f[arr[i][0]]++;
            }
        }
        vector<vector<int>> res;
        sort(ol.begin(),ol.end());
        sort(nl.begin(),nl.end());
        res =  {nl,ol};
        // sort(res.begin(),res.end());
        return res;
    }
};