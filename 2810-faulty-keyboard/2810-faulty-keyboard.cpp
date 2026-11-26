class Solution {
public:
    
    string finalString(string s) {
        int j = 0;
        string res;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'i'){
                // s.erase(i,1);
                reverse(res.begin(),res.end());
                // continue;
            }
            else{
                res += s[i];
            }
            
        }
        return res;
    }
};