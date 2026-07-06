class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
         int i=0;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]+arr[j]==k){
                return {i+1,j+1};
            }
            if(arr[i]+arr[j]<k){
                i++;
            }
            if(arr[i]+arr[j]>k){
                j--;
            }
        }
        return {};
    }
};