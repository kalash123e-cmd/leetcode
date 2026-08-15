class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) {
        vector<int> brr;
        int n = arr.size();
        brr.reserve(n);
        for(int i = 0; i<n; i++){
            if(arr[i]<pivot){
                brr.push_back(arr[i]);
            }
        }
        for(int i = 0; i<n; i++){
            if(arr[i]==pivot){
                brr.push_back(arr[i]);
            }
        }
        for(int i = 0; i<n; i++){
            if(arr[i]>pivot){
                brr.push_back(arr[i]);
            }
        }
        return brr;
    }
};