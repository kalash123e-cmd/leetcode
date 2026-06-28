class Solution {
public:
    bool canConstruct(string a, string b) {
        unordered_map<char,int> f;
        for(int i = 0; i<b.size(); i++){
            f[b[i]]++;
        }
        // for(int i = 0; i<a.size(); i++){

        // }
        int i = 0;
        while(f[a[i]] != 0 && i<a.size()){
            f[a[i]]--;
            i++;
        }
        if(i == a.size()){
            return true;
        }
        else{
            return false;
        }
    }
};