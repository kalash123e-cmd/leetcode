class Solution {
public:
    bool ana(string k, vector<int> f){
        int i = 0;
        while(i<k.size()){
            if(f[k[i]] == 0){
                return false;
            }
            else{
                f[k[i]]--;
            }
            i++;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> f(256,0);
        vector<int> res;
        string t;
        for(int i = 0; i<p.size(); i++){
            f[p[i]]++;
            t += s[i];
        }
        if(ana(t,f)){
            res.push_back(0);
        }
        // vector<int> x = f;
        int i = 1;
        int j = p.size();
        t = "";
        while(j<s.size()){
            t = s.substr(i,p.size());
            if(ana(t,f)){
                res.push_back(i);
            }
            i++;
            j++;
        }
        return res;
        
    }
};