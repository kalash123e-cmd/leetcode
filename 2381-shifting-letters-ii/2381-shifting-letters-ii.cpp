class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& arr) {
        vector<int> diff(s.size() + 1, 0);
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i][2] == 0) {
                diff[arr[i][0]]--;
                diff[arr[i][1] + 1]++;
            } else {
                diff[arr[i][0]]++;
                diff[arr[i][1] + 1]--;
            }
        }
        vector<int> res(s.size());
        res[0] = diff[0];
        for (int i = 1; i < s.size(); i++) {
            res[i] = diff[i] + res[i - 1];
        }
        for (int i = 0; i < s.size(); i++) {
            int shift = res[i] % 26; 

            if (s[i] + shift < 97) {
                s[i] = (char)(s[i] + (shift + 26));
            } else if (s[i] + shift > 122) {
                s[i] = (char)(s[i] + (shift - 26));
            } else {
                s[i] = (char)(s[i] + shift);
            }
        }
        return s;
    }
};