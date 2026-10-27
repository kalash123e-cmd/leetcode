class Solution {
public:
    long long countBadPairs(vector<int>& arr) {
        unordered_map<int,int> f;
        for(int i = 0; i<arr.size(); i++){
            f[i - arr[i]]++;
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
        long long ans = arr.size() * (arr.size() - 1)/2;
        return ans - count;
    }
};