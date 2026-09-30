class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        unordered_map<int, int> f;
        if(k >= arr.size()){
            for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            if(f[arr[i]] > 1){
                return true;
            }
        }
        return false;
        }
        for(int i = 0; i<k+1; i++){
            f[arr[i]]++;
            if(f[arr[i]] > 1){
                return true;
            }
        }
        int i = 0;
        int j = k+1;
        while(j<arr.size()){
            f[arr[i]]--;
            if(f[arr[i]] == 0){
                f.erase(arr[i]);
            }
            f[arr[j]]++;
            if(f.size() != k+1){
                return true;
            }
            i++;
            j++;
        }
        return false;
    }
};