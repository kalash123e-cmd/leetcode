class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int j = 0;
        unordered_map<char,int> f;
        
        for(int i = 0; i<s.size(); i++){
            f[s[i]]++;
          

            while(f[s[i]] > 1){
                f[s[j]]--;
                j++;
            }
              res = max(res,i-j+1); 
        }
        return res;
    }
};