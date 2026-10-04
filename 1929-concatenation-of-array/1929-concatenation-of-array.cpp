class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
        vector<int> res = arr;
        for(int i = 0; i<arr.size(); i++){
            res.push_back(arr[i]);
        }
        
        return res;
    }
};