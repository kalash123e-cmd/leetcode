class Solution {
public:
    int hIndex(vector<int>& arr) {
        int n = arr.size();
        
        int res = 0;
        int i = 0;
        int j = n-1;

        while(i<=j){
            int papers = (i+j)/2;
            // long long count = 0; 
            // for(int k = 0; k<n; k++){
            //     if(arr[k] >= papers){
            //         count++;
            //     }
            // }
            // if(papers == count){
            //     res = max(res,papers);
            // }
            if(arr[papers] >= n-papers){
                j = papers-1;
            }
            else{
                i = papers+1;
            }
        }
        return n-i;
    }
};