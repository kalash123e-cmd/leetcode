class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int res = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
                res = max(res,count);
            }
            if(s[i] == ')'){
                count--;
            }
        }
        return res;
    }
};