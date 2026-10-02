class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1;
        int res = 1;
        for(int i = 1; i<s.size(); i++){
            int a = s[i];
            int b = s[i-1];
            if(a == b+1){
                count++;
                res = max(res,count);
            }
            if(a != b+1){
                count = 1;
            }
        }
        return res;
    }
};