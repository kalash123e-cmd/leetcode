class Solution {
public:
    int equalSubstring(string s, string t, int k) {
        // vector<int> arr(s.size());
        // for(int i = 0; i<s.size(); i++){
        //     arr[i] = abs(s[i]-t[i]);
        // }
        int sum = 0;
        int j = 0;
        int res = 0;
        for(int i = 0; i<s.size(); i++){
            sum += abs(s[i]-t[i]);
            while(sum>k){
                sum -= abs(s[j]-t[j]);
                j++;
            }
            res = max(res,i-j+1);
        }
        return res;

    }
};