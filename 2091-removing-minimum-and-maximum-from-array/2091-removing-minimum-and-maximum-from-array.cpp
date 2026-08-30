class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            mn = min(mn,arr[i]);
            mx = max(mx,arr[i]);
        }
        int count = 2;
        int i = 0;
        int del = 0;
        int odel = 0;
        int tdel = 0;
        while(count>0 && i<arr.size()){
            del++;
            if(arr[i] == mn || arr[i] == mx){
                count--;
                if(count == 1){
                    odel = del;
                }
            }
            i++;
        }
        i = arr.size()-1;
        count = 2;
        int res = del;
        del = 0;
        while(count>0 && i>=0){
            del++;
            if(arr[i] == mn || arr[i] == mx){
                count--;
                if(count == 1){
                    tdel = del;
                }
            }
            i--;
        }
        res = min(min(res,del),odel+tdel);
        return res;
    }
};