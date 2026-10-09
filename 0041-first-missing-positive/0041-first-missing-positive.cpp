class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        vector<int> f(arr.size()+1,0);
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] >0 && arr[i] <= arr.size()){
                f[arr[i]]++;
            }        
        }
        for(int i = 1; i<f.size(); i++){
            if(f[i] == 0){
                return i;
            }
        }
        return arr.size() + 1;
    }
};