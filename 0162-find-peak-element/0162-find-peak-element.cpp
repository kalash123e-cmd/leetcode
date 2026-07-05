class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int i = 0;
        int res = 0;
        int j = arr.size()-1;
        while(i<j){
            int mid = (i+j)/2;
            if(arr[mid] < arr[mid + 1]){
                
                i = mid+1;
            }
            else{
                res = mid;
                j = mid;
                
            }
        }
        return i;
    }
};