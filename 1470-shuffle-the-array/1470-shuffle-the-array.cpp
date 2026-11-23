class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        vector<int> res;
        // for(int i = 0; i<arr.size();)
        int i = 0;
        int  j = n;
        while(j<arr.size()){
            res.push_back(arr[i]);
            res.push_back(arr[j]);
            i++;
            j++; 
        }
        return res;

    }
};