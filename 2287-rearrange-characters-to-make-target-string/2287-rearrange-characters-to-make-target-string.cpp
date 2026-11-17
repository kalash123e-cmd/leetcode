class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        vector<int> f(256,0);
        vector<int> g(256,0);
        for(int i = 0; i<s.size(); i++){
            f[s[i]]++;
        }
        int count = INT_MAX;
        for(int i = 0; i<t.size(); i++){
            g[t[i]]++;
            count = min(f[t[i]]/g[t[i]],count);
            
        }
        return count;
    }
};