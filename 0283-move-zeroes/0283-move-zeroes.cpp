class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i=0;
        int j=0;
        for(int i=0; i<arr.size(); i++){
            
                if(arr[i]!=0){
                    swap(arr[i],arr[j]);
                    
                    j++;
                }
                
            
        }


    }
};