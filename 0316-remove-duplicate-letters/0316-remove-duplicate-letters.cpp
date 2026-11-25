class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> f(256, 0);
        vector<int> vis(256, 0);
        for (int i = 0; i < s.size(); i++) {
            f[s[i]]++;
        }
        string res;
        res += s[0];
        f[s[0]]--;
        vis[s[0]] = 1;
        for (int i = 1; i < s.size(); i++) {
            f[s[i]]--;
            if (vis[s[i]] == 1) {
                continue;
            }
            while (res.size() > 0 && res.back() > s[i] && f[res.back()] > 0) {
                // vis[s[i]] = 1;
                vis[res.back()] = 0;
                // f[s[i]]--;
                res.pop_back();
            }
            if (vis[s[i]] == 0) {
                vis[s[i]] = 1;

                res += s[i];
            }
        }
        return res;
    }
};