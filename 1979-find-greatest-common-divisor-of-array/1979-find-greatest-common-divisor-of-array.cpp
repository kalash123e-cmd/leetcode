class Solution {
public:
    int findGCD(vector<int>& arr) {
        int mn = 1000000;
        int mx = 0;
        for(int i = 0; i<arr.size(); i++){
            mn = min(mn,arr[i]);
            mx = max(mx,arr[i]);
        }
        return gcd(mn,mx);
    }
};