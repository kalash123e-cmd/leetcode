class Solution {
public:
    vector<int> resultArray(vector<int>& arr) {
        vector<int> res;
        vector<int> brr;
        res.push_back(arr[0]);
        brr.push_back(arr[1]);
        for(int i = 2; i<arr.size(); i++){
            if(brr[brr.size()-1] < res[res.size()-1]){
                res.push_back(arr[i]);
            }
            else{
                brr.push_back(arr[i]);
            }
        }
        for(int i = 0; i<brr.size(); i++){
            res.push_back(brr[i]);
        }
        return res;
        
    }
};