class Solution {
public:
    int totalFruit(vector<int>& arr) {
        unordered_map<int,int> f;
        int res = 0;
        if(arr.size() == 1){
            return 1;
        }
        if(arr.size() == 2){
            return 2;
        }
        int i = 0;
        f[arr[0]]++;
        f[arr[1]]++;
        int j = 2;
        int t = 0;
        int u = -1;
        int count = 2;
        while(j<arr.size()){

            // res = count;
            // if(t != i){
            //     f[arr[i]]++;
            // }
            // t = i;
            if(u != j){
                f[arr[j]]++;
            }
            u = j;
            
            if(f.size() <= 2){
                count++;
            }
            if(f.size() > 2){
                
                f[arr[i]]--;
                if (f[arr[i]] == 0) {
                f.erase(arr[i]);
                
                }
                i++;
                count--;
                res = max(res,count);
                continue;
            }
            res = max(res,count);
            j++;
        }
        return res;
    }
};