class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> f;
        // for(int i = 0; i<s.size(); i++){
        //     f[s[i]]++;
        // }

        int i = 0;
        int j = 2;
        f[s[0]]++;
        f[s[1]]++;
        int count = 2;
        int res = 2;
        while(j<s.size()){
            if(f[s[j]]<2){
                count++;
                f[s[j]]++;
                j++;
            }
            else{
                count--;
                f[s[i]]--;
                i++;
            }
            res = max(res,count);
        }
        return res;

    }
};