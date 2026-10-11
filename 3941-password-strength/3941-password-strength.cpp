class Solution {
public:
    int passwordStrength(string s) {
        vector<int> f(256,0);
        int str = 0;
        for(int i = 0; i<s.size(); i++){
            if(f[s[i]] == 0 && isdigit(s[i])){
                str += 3;
            }
            else if(f[s[i]] == 0 && islower(s[i])){
                str += 1;
            }
            else if(f[s[i]] == 0 && isupper(s[i])){
                str += 2;
            }
            else if(f[s[i]] == 0){
                str += 5;
            }
            f[s[i]]++;
        }
        return str;
    }
};