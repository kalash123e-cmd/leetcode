class Solution {
public:
    int search(vector<int>& arr, int t) {
        int n = arr.size();
        int i = 0;
        int j = n-1;
        int res = arr[j];
        if(n == 1 && arr[0] == t){
            return 0;
        }
        while(i<j){
            int mid = (i+j)/2;

            if(arr[mid] > arr[j]){
                i = mid+1;
            }
            else{
                res = mid;
                j = mid;
            }
            if(i == j){
                res = j;
            }
        }
        // return res;
        i = 0;
        j = n-1;
        if(res == 0){
            i = 0;
            j = n-1;
        }
        else{
        if(t > arr[j]){
            j = res - 1;
        }
        else{
            i = res;
        }
        }
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[mid] == t){
                return mid;
            }
            if(arr[mid] > t){
                j = mid - 1;
            }
            if(arr[mid] < t){
                i = mid + 1;
            }
        }
        return -1;
    }
};