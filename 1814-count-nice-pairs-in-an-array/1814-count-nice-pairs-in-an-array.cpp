class Solution {
public:
    int rev(int n) {
        int r = 0;
        while (n > 0) {
            r = r * 10 + n % 10;
            n /= 10;
        }
        return r;
    }
    int countNicePairs(vector<int>& arr) {
        // arr[i] - rev(arr[i]) == arr[j] - rev(arr[j])
        unordered_map<int,int> f;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i] - rev(arr[i])]++;
        }
        long long count = 0;
        for(auto i : f){
            int x = i.second;
            int y = 1;
            while(x >= 2){
                count += 1*y;
                y++;
                x--;
            }
        }
        return count % 1000000007;
    }
};