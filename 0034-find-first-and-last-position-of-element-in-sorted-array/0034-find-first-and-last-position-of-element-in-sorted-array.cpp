class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int t) {
        int l = -1;
        int u = -1;
        int i = 0; 
        int j = arr.size() - 1;
        if(arr.size() == 0){
            return {-1,-1};
        }
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[mid] < t){
                i = mid+1;
            }
            else{
                l = mid;
                j = mid-1;
            }
        }
        if(l == -1 || arr[l] != t){
            return {-1,-1};
        }
        i = 0;
        j = arr.size() - 1;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[mid] > t){
                j = mid-1;
            }
            else{
                u = mid;
                i = mid+1;
            }
        }
        // if(arr[l] != t || arr[u] != t || l == -1 || u == -1){
        //     return {-1,-1};
        // }

        return {l,u};
        
    }
};