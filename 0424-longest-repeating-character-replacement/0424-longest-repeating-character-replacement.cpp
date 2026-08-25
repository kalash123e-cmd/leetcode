class Solution {
public:
    int find(vector<int>& f){
        int mx = 0;
        for(int i =0; i<f.size(); i++){
            mx = max(mx,f[i]);
        }
        return mx;
    }
    int characterReplacement(string s, int k) {
        vector<int> f(256,0);
        // for(int i = 0; i<s.size(); i++){
        //     f[s[i]]++;
        // }
        int count = 0;
        int res = 0;
        int low = 0;
        for(int high = 0; high<s.size(); high++){
            f[s[high]]++;
            int len = high-low+1;
            int mxcnt = find(f);
            int diff = len-mxcnt;
            while(diff>k){
                f[s[low]]--;
                low++;
                len = high-low+1;
                mxcnt = find(f);
                diff = len - mxcnt;
            }
            len = high-low+1;
            res = max(len,res);
        }
        return res;
    }
};