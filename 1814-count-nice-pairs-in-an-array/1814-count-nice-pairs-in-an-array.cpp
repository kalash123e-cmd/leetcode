class Solution {
public:
    int rev(int n){
        string s = to_string(n);
        reverse(s.begin(),s.end());
        return stoi(s);
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