class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& s, string p) {
        vector<string> res;
        vector<int> f(256,-1);
        vector<int> x(p.size());
        for (int i = 0; i < p.size(); i++) {
            if (f[p[i]] == -1) {
                f[p[i]] = i;
            }
            x[i] = f[p[i]];
        }
        for(int i = 0; i<s.size(); i++){
            vector<int> g(256,-1);
            vector<int> y(p.size());
            for (int j = 0; j < s[i].size(); j++) {
                if (g[s[i][j]] == -1) {
                    g[s[i][j]] = j;
                }
                y[j] = g[s[i][j]];
            }
            if(x == y){
                res.push_back(s[i]);
            }
        }
        return res;
    }
};