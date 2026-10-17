class Solution {
public:
    int subarraysWithKDistinct(vector<int>& arr, int k) {
        unordered_map<int,int> f;
        int j = 0;
        // int count = 0;
        int a = 0;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            while( f.size() == k ){
                a += arr.size()-i;
                f[arr[j]]--;
                if(f[arr[j]] == 0){
                    f.erase(arr[j]);
                }
                j++;
            }
        }
        f.clear();
        j = 0;
        int b = 0;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            while( f.size() == k+1){
                b += arr.size()-i;
                f[arr[j]]--;
                if(f[arr[j]] == 0){
                    f.erase(arr[j]);
                }
                j++;
            }
        }
        return abs(a-b);
    }
};