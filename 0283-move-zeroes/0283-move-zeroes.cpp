class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i=0;
        int j=0;
        for(int i=0; i<arr.size(); i++){
            
                if(arr[i]!=0){
                    swap(arr[i],arr[j]);
        //             arr[i] = arr[i] ^ arr[j];
        // arr[j] = arr[i] ^ arr[j];
        // arr[i] = arr[i] ^ arr[j];
                    j++;
                }
                
            
        }
        // sort(arr.begin(),arr.end);
        


    }
};