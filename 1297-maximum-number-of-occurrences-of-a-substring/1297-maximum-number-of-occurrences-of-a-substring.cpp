class Solution {
public:
    int maxFreq(string s, int l, int mn, int mx) {
        unordered_map<string, int> f2;
        unordered_map<char, int> f;
        for(int i = 0; i<mn; i++){
            f[s[i]]++;
        }
        if(f.size() <= l){
            f2[s.substr(0,mn)]++;
        }
        int i = 0;
        int j = mn;
        while(j<s.size()){
            f[s[i]]--;
            if(f[s[i]] == 0){
                f.erase(s[i]);
            }
            f[s[j]]++;
            i++;
            j++;
            if(f.size() <= l){
                f2[s.substr(i,mn)]++;
            }

        }
        int res = 0;
        for(auto i : f2){
            res = max(res,i.second);
        }
        return res;
    }
};