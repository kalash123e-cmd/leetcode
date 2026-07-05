class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int i = 0;
        // int res = -1;
        // int j = arr.size() - 1;
        // while(i<j){
        //     int mid = (i+j)/2;
        //     if(arr[mid+1] > arr[mid]){
        //         i = mid + 1;
        //     }
        //     if(arr[mid+1] < arr[mid]){
        //          res = mid;
        //         j = mid ;
        //     }
        // }
        // return res;

        int i = 0;
        int j = arr.size()-1;
        while(i<j){
            int mid = (i+j)/2;
            if(arr[mid] < arr[mid + 1]){
                i = mid+1;
            }
            else{
                j = mid;
            }
        }
        return i;
    }
};