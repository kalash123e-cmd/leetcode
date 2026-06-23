class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        int j = 0;
        int i = 0;
        int count = 0;
        int n = arr.size();
        int pr = 1;
        // int res = 0;
        while(i<n && j<n){
            
                if(i == j){
                    pr = arr[i];
                }
                else{
                    pr = pr*arr[j];
                }
                while(pr < k && j<arr.size()){
                    count++;
                    j++;
                    if(j<n){
                    pr = pr*arr[j]; 
                    }
                }
                
                pr = pr/arr[i];
                i++;
                j = i;
            
        }
        return count;
    }
};