class Solution {
public:
    int maxVowels(string s, int k) {
        // string v = "aeiou";
        // vector<int> f(1000000,0);
        // for(int i = 0; i<s.size(); i++){
        //     f[v[i]]++;
        // }
        int count = 0; 
        for(int i = 0; i<k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u'){
                count++;
            }
        }
        int res = count;
        int i = 0;
        int j = k;
        while(j<s.size()){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u'){
                count--;
            } 
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i'|| s[j] == 'o' || s[j] == 'u'){
                count++;
            }
            res = max(res,count);
            i++;
            j++;
        }
        return res;
    }
};