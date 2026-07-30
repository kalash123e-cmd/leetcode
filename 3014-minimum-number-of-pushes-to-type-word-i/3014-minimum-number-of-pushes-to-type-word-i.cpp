class Solution {
public:
    int minimumPushes(string s) {

        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            // int x = i / 8;
            count += 1 + (i / 8);
        }
        return count;
    }
};