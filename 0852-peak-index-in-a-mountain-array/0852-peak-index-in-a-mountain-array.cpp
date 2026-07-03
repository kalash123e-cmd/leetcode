class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak = 0;
        for(int i = 0; i<arr.size(); i++){
            peak = max(peak,arr[i]);
        }
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == peak){
                return i;
            }
        }
        
        return -1;
    }
};