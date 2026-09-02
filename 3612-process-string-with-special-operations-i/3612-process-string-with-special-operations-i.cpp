class Solution {
public:
    string processStr(string s) {
        string res;
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                res = res + s[i];
            } else {
                if (s[i] == '%') {
                    reverse(res.begin(), res.end());
                }
                if (s[i] == '*') {
                    if (res != "") {
                        res.pop_back();
                    }
                }
                if (s[i] == '#') {
                    res = res + res;
                }
            }
        }
        return res;
    }
};