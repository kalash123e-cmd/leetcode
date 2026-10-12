class Solution {
public:
    string customSortString(string o, string s) {
        vector<int> f(256,0);
        for(int i = 0; i<s.size(); i++){
            f[s[i]]++;
        }
        string res;
        for(int i = 0; i<o.size(); i++){
            while(f[o[i]]>0){
                res += o[i];
                f[o[i]]--;
            }
        }
        for(int i = 0; i<s.size(); i++){
            if(f[s[i]]>0){
                res += s[i];
            }
        }
        return res;
    }
};