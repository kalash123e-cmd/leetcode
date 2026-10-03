class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int k) {
        int mx = 0;
        for(int i = 0; i<arr.size(); i++){
            mx = max(arr[i],mx);
        }
        vector<bool> res(arr.size(),0);
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]+k >= mx){
                res[i] = 1;
            }
            // else{
            //     res[i] = 0;
            // }
        }
        return res;
    }
};