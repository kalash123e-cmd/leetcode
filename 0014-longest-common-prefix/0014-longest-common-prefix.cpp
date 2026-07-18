class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if (s.empty()) return "";
        string res;
        sort(s.begin(),s.end());
        int i = 0;
        int j = 0;
        while(i < s[0].size() && j < s[0].size()){
            if(s[0][i] == s[s.size()-1][j]){
                res.push_back(s[0][i]);
                i++;
                j++;
                continue;
            }
            break;
        }
        return res;
    }
};