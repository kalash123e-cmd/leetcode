class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> res(arr.size(),0);
        int k = 0;
        int j = 1;

        for(int i = 0; i<arr.size(); i++){
            if(arr[i] > 0 ){
                res[k] = arr[i];
                k = k + 2;
                continue;
            }
            if(arr[i]<0){
                res[j] = arr[i];
                j=j+2;
            }
        }
        return res;
    }
};