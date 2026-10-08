class Solution {
public:
    string removeOuterParentheses(string s) {
        // stack<int> st;
        int count = 0;
        string res;
        // st.push(s[0]);
        for(int i = 0; i<s.size(); i++){
            if(count>0){
                res += s[i];
            }
            if(s[i] == '('){
                count++;
            }
            else{
                count--;
            }
            if(count==0 ){
                res.pop_back();
            }
        }
        return res;
    }
};