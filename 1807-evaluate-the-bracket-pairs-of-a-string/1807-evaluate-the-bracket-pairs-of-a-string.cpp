class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        unordered_map<string,string> f;
        for(int i = 0; i<k.size(); i++){
            f[k[i][0]] = k[i][1];
        }
        string res = "";
        for(int i = 0 ; i <s.size(); i++){
            if(s[i] == '('){
                i++;
                string x = "";
                while(s[i] != ')'){
                    x += s[i];
                    i++;
                }
                if(f.count(x) > 0){
                    res += f[x];
                }
                else{
                    res += '?';
                }
                continue;
            }
            res += s[i];
        }
        return res;
    }
};