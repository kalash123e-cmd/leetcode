class Solution {
public:
    int lengthOfLastWord(string s) {
        // int i = s.size();
        // int j = s.size();
        // while
        int count = 0;
        int res = 0;
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] == ' ' && res != 0){
                break;
            }
            if(s[i] == ' '){
                count++;
            }
            else{
                res++;
                count = 0;
            }
        }
        return res;
    }
};