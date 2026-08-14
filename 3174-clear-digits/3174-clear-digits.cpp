class Solution {
public:
    string clearDigits(string s) {
        string res;
        // stack<int> st;
        for(int i = 0; i<s.size(); i++){
            if(!(isdigit(s[i]))){
                res.push_back(s[i]);
            }
            else{
                res.pop_back();
            }
        }
        // while(!st.empty()){
        //     res.push_back(st.top());
        //     st.pop();
        // }
        // reverse(res.begin(),res.end());
        return res;
    }
};