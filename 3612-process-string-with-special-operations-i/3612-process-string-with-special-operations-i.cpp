class Solution {
public:
    string processStr(string s) {
        string res;
        for(int i = 0; i<s.size(); i++){
            if(isalpha(s[i]) ){
                // res.push_back(s[i]);
                res = res+s[i];
                continue;
            }
            if(s[i] == '%'){
                reverse(res.begin(),res.end());
                continue;
            }
            if(s[i] == '*'){
                if(res != ""){
                    res.pop_back();
                    continue;
                }
                
            }
            if(s[i] == '#'){
                res = res+res;
                continue;
            }
        }
        return res;
    }
};