class Solution {
public:
    int findMin(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        int res = arr[j];
        while(i<j){
            int mid = (i+j)/2;
            if(arr[mid] > arr[j]){
                i = mid+1;
            }
            if(arr[mid] < arr[j]){
                res = arr[mid];
                j = mid;
            }
        }
        return res;
    }
};