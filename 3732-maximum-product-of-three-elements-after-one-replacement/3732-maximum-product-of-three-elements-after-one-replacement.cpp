class Solution {
public:
    long long maxProduct(vector<int>& arr) {
        for(int i = 0; i<arr.size(); i++){
            arr[i] = abs(arr[i]);
        }
        long long x = 100000;
        sort(arr.begin(),arr.end());
        // long long a = 100000*arr[0]*arr[1];
        long long b = x*arr[arr.size()-2]*arr[arr.size()-1];
        return b;
    }
};