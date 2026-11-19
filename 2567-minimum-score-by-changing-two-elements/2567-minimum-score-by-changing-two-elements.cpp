class Solution {
public:
    int minimizeSum(vector<int>& arr) {
        // 5,5,5,7,8 -> 3
        // 5,5,5,4,1 -> 4
        int n = arr.size();
        sort(arr.begin(),arr.end());
        long long case1 = arr[n - 1] - arr[2]; // change 2 smallest
long long case2 = arr[n - 3] - arr[0]; // change 2 largest
long long case3 = arr[n - 2] - arr[1]; // change 1 smallest & 1 largest

return min({case1, case2, case3});


    }
};