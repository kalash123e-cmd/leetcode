class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size() == 0){
            return 0;
        }
        sort(arr.begin(),arr.end());
        int count = 1;
        int res = 0;
        
        // vector<int> f(50000);
        unordered_map<int,int> f;
        for(int i = 0; i<arr.size() ; i++){
            f[arr[i]]++;
        }
        int i = 1;
        while(i<arr.size()){
            if(arr[i] == arr[i-1]){
                i++;
                continue;
            }
            if(f[arr[i] - 1] > 0){
                count++;
                // i++;
                // continue;
            }
            else{
                res = max(res,count);
                count = 1;
            }
            i++;
        }
        return max(res,count);
    }
};