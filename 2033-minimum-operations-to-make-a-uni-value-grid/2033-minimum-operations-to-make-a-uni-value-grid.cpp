class Solution {
public:
    int minOperations(vector<vector<int>>& gr, int x) {
        vector<int> arr;
        for(int i = 0 ;i<gr.size(); i++){
            for(int j = 0; j<gr[0].size(); j++){
                arr.push_back(gr[i][j]);
            }
        } 
        sort(arr.begin(),arr.end());
        int count = 0;
        int mid = arr[arr.size()/2];
        for(int i = 0 ;i<arr.size(); i++){
            if(arr[i] % x != mid % x){
                return -1;
            }
            count += abs(arr[i]-mid)/x;
        }
        return count;
    }
};