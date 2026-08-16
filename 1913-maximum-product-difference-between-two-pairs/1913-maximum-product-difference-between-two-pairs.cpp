class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        return ((arr[0]*arr[1]) - (arr[arr.size()-1]*arr[arr.size()-2]))*-1;
    }
};