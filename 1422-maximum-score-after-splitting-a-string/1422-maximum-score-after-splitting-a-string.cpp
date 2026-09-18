class Solution {
public:
    int maxScore(string s) {
        if(s.size() == 2){
            if(s[1] == s[0]){
                return 1;
            }
            if(s[0] == '0'){
                return 2;
            }
        }
        vector<int> z;
        int zsum = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '0'){
                zsum++;
            }
            z.push_back(zsum);
        }
        vector<int> o(s.size());
        int osum = 0;
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] == '1'){
                osum++;
            }
            o[i] = osum;
        }
        int res = 0;
        for(int i = 1; i<s.size()-1; i++){
            if(s[i] == '0'){
                zsum++;
            }
            res = max(res,z[i]+o[i]);
        }
        return res;
    }
};