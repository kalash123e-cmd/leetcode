class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int k[m+n];
        int i = 0;
        int j = 0;
        int l = 0;

        while(i<m && j<n){
            if(arr1[i]<=arr2[j]){
                k[l] = arr1[i];
                i++;
                l++;
            }
            else{
                k[l] = arr2[j];
                j++;
                l++;
            }
            // l++;
            
        }
        while(i<m){
            k[l] = arr1[i];
            i++;
            l++;
        }
        // return k;
        while(j<n){
            k[l] = arr2[j];
            j++;
            l++;
        }
        for(int i = 0; i<m+n; i++){
            arr1[i] = k[i];
        }
    }
};