class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string res;
        string x;
        for(int i = 0; i<s.size(); i++){
            x += s[i];
            if(s[i] == '('){
                st.push(i);
            }
            if(s[i] == ')'){
                reverse(x.begin()+st.top(),x.end());
                st.pop();
            }
        }
        for(int i = 0; i<x.size(); i++){
            if(x[i] != '(' && x[i] != ')'){
                res += x[i];
            }
        }
        return res;
    }
};