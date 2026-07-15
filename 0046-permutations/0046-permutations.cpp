class Solution {
public:
    void fun(vector<int>& arr, int i, vector<int>& temp, vector<vector<int>>& res, vector<bool>& count){
        if(i == arr.size()){
            res.push_back(temp);
            return;
        }
        // vector<bool> count;
        // count[0] = false;
        for(int j = 0; j<arr.size(); j++){
            if(count[j] == false){
                count[j] = true;
                temp.push_back(arr[j]);
                fun(arr,i+1,temp,res,count);
                temp.pop_back(); 
                count[j] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& arr) {
        vector<int> temp;
        vector<vector<int>> res;
        vector<bool> count(arr.size(), false);
        fun(arr,0,temp,res,count);
        return res;
    }
};