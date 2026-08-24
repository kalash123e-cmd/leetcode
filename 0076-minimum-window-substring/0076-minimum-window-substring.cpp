class Solution {
public:
    bool sahi(vector<int>& have, vector<int>& need){
        for(int i = 0; i<256; i++){
            if(have[i] < need[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(t.size() > s.size()){
            return "";
        }
        vector<int> have(256,0);
        vector<int> need(256,0);
        for(int i = 0; i<t.size(); i++){
            need[t[i]]++;
        }
        int j = 0;
        int start = 0;
        int res = INT_MAX;
        for(int i = 0; i<s.size(); i++){
            have[s[i]]++;
            while(sahi(have,need)){
                int len = i - j + 1;
                if(res > len){
                    res = len;
                    start = j;
                }
                have[s[j]]--;
                j++;
            }
        }
        if(res == INT_MAX){
            return "";
        }
        return s.substr(start,res);
    }
};