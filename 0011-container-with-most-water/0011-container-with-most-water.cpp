class Solution {
public:
    int maxArea(vector<int>& arr) {
        int l = 0;
        int r = arr.size() -1;
        int res = 0;

        while(l<r){
            int a = min(arr[l],arr[r]) * (r-l);
            res = max(a,res);
            if(arr[l]<arr[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};