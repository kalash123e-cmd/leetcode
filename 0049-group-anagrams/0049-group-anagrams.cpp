class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> f;
        vector<vector<string>> res;
        vector<string> x = s;
        for(int i = 0; i<s.size(); i++){
            sort(x[i].begin(),x[i].end());
            f[x[i]].push_back(s[i]);
        }
        
        for(auto i : f){
            res.push_back(i.second);
        }
        return res;
    }
};