class Solution {
public:
    int reverseDegree(string s) {
        // vector<int> f(256,0);
        // char r[26] = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
        // for(int i = 0; i<26; i++){
        //     f[r[i]] = 26-i;
        // }
        int sum = 0;
        for(int i = 0; i<s.size(); i++){
            int x = 'z' - s[i] +1;
            sum += x * (i+1);
        }
        return sum;
    }
};