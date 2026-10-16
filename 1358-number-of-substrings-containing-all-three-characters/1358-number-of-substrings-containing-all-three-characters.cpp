class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<int,int> f;
        // f['a'] = 1;
        // f['b'] = 1;
        // f['c'] = 1;
        int j = 0;
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            f[s[i]]++;
            while(f.size() == 3){
                count +=   s.size()-i;
                f[s[j]]--;
                if(f[s[j]] == 0){
                    f.erase(s[j]);
                }
                j++;
            }
        }
        return count;
    }
};