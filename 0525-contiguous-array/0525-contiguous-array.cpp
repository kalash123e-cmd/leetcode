class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        unordered_map<int,int> f;
        int n = arr.size();
        int res = 0;
        int one = 0;
        int zero = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                zero++;
            }
            else{
                one++;
            }
            int dif = one - zero;
            if(dif == 0){
                res = max(res,i+1);
            }
            if(f.find(dif) == f.end()){
                f[dif] = i;
            }
            else{
                int ind = f[dif];
                res = max(res,i-ind);
            }
        }
        return res;
    }
};