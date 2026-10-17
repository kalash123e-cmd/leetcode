class Solution {
public:
    int equalSubstring(string s, string t, int k) {
        vector<int> arr;
        for(int i = 0; i<s.size(); i++){
            arr.push_back(abs(s[i]-t[i]));
        }
        int sum = 0;
        int j = 0;
        int res = 0;
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
            while(sum>k){
                sum -= arr[j];
                j++;
            }
            res = max(res,i-j+1);
        }
        return res;

    }
};