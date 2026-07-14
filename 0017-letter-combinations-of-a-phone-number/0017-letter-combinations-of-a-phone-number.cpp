class Solution {
public:
    void fun(int i, string &s, vector<string>& res, string &temp, unordered_map<char,string>& f){
        if(i == s.size()){
            res.push_back(temp);
            return;
        }
        string ch = f[s[i]];
        for(int j = 0; j<ch.size(); j++){
            temp.push_back(ch[j]);
            fun(i+1,s,res,temp,f);
            temp.pop_back();
        }
        
    }
    vector<string> letterCombinations(string s) {
        unordered_map<char,string> f;
        string temp;
        vector<string> res;
        f['2'] = "abc";
        f['3'] = "def";
        f['4'] = "ghi";
        f['5'] = "jkl";
        f['6'] = "mno";
        f['7'] = "pqrs";
        f['8'] = "tuv";
        f['9'] = "wxyz";
        fun(0,s,res,temp,f);
        return res;

    }
};