class Solution {
public:
    int missingMultiple(vector<int>& arr, int k) {
        // vector<int> f(256,0);
        unordered_map<int,int> f;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        int i = k;
        while(true){
            if(f[i] == 0){
                break;
            }
            i = i+k;
        }
        return i;
    }
};