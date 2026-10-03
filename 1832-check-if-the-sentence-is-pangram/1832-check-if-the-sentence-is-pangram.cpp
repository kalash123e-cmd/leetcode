class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map<char,int> f;
        for(int i = 0; i<s.size(); i++){
            f[s[i]]++;
            if(f.size() == 26){
                return true;
            }
        }
        return false;
    }
};