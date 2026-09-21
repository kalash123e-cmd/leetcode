class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        vector<int> f(256,0);
        int count = w.size();
        for(int i = 0; i<a.size(); i++){
            f[a[i]]++;
        }
        for(int i = 0; i<w.size(); i++){
            for(int j = 0 ; j<w[i].size(); j++){
                if(f[w[i][j]] == 0){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};