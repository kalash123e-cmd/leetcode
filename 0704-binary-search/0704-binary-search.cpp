class Solution {
public:
    int search(vector<int>& arr, int t) {
        int i = 0;
        int j = arr.size()-1;
        while(i<=j){
            int mid = (j + i) / 2;
            if(arr[mid] == t){
                return mid ;
            }
            if(arr[mid]<t){
                i = mid +1;
            }
            if(arr[mid]>t){
                j = mid -1;
            }
        }
        return -1;
    }
};