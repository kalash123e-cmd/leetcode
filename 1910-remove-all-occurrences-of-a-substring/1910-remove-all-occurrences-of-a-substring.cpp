class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res ;
        for(int i = 0; i<s.size(); i++){
            res.push_back(s[i]);
            int j = part.size()-1;
            stack<int> st;
            int k = res.size()-1;
            // if(k<part.size()){
            //     continue;
            // }
            while(j>=0 && k>=0 && res[k]==part[j]){
                st.push(s[j]);
                j--;
                k--;
            }
            // i = i+st.size();
            if(st.size() == part.size()){
                while(!st.empty()){
                res.pop_back();
                st.pop();
                }
            }
            


        }
        return res; 
    }
};