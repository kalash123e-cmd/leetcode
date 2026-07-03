class Solution {
public:
    long long divide(long long a, long long b) {
        if (a == -2147483648 && b == -1) {
            return 2147483647;
        }
        return a/b;
    }
};