class Solution {
public:
    int countCompleteSubarrays(vector<int>& arr) {
        unordered_map<int,int> f;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        int k = f.size();
        f.erase(f.begin(),f.end());
        int j = 0;
        int count = 0;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            // if(f.size() < k){
            //     continue;
            // }
            // count++;
            while( f.size() == k ){
                f[arr[j]]--;
                // count++;
                if(f[arr[j]] == 0){
                    f.erase(arr[j]);
                }
                j++;

            }

            count += j;
        }
        return count;
    }
};