class Solution {
public:
    bool checkInclusion(string s, string t) {
        vector<int> f(256,0);
        
        for(int i = 0 ; i<s.size(); i++){
            f[s[i]]++;
        }
        int i = 0;
        int j = s.size()-1;
        int count = 0;
        while(j<t.size()){
            vector<int> h(256,0);
            count = 0;
            for(int k = i; k<=j; k++){
                h[t[k]]++;
                if(h[t[k]] > f[t[k]]){
                    // h[t[k]]--;
                    // i++;
                    // j++;
                    break;
                }
                count++;
            }
            if(count == s.size()){
                return true;
            }
            i++;
            j++;
        }
        return false;
    }
};