class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long cn = min(need1,need2);
        long long ci = cn * min((long long)costBoth, (long long)cost1 + cost2);
        if (need1 > need2) {
            ci += (long long)(need1 - need2) * min(cost1, costBoth);
        } else if (need2 > need1) {
            ci += (long long)(need2 - need1) * min(cost2, costBoth);
        }
        return ci;
    }
};