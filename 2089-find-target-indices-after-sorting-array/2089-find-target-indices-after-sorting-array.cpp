class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int t) {
        sort(arr.begin(),arr.end());
        vector<int> res;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == t){
                res.push_back(i);
            }
        }
        return res;
    }
};