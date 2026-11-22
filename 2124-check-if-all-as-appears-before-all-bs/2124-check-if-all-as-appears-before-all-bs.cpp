class Solution {
public:
    bool checkString(string s) {
        bool b = true;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'b'){
                b = false;
            }
            if(b == false && s[i] == 'a'){
                return false;
            }
        }
        return true;
    }
};