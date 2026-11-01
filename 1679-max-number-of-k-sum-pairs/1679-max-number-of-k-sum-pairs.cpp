class Solution {
public:
    int maxOperations(vector<int>& arr, int k) {
        // vector<int> f(100001);
        unordered_map<int,int> f;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        int count = 0;
        for(int i = 0; i<arr.size(); i++){
            int x = k-arr[i];
            if(f[x] > 0){
                if(x == arr[i]){
                    if(f[x] > 1){
                        count++;
                        f[arr[i]]--;
                        f[arr[i]]--;
                    }
                }
                else{
                    if(f[arr[i]] > 0){count++;
                    f[x]--;
                    f[arr[i]]--;}
                }
            }
        }
        return count;
    }
};