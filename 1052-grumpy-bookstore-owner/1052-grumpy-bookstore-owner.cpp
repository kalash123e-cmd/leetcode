class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& g, int m) {
        int sum = 0;
        for(int i = 0; i<m; i++){
            if (g[i] == 1) {
                sum += arr[i];
            }
        }
        int res = sum;
        int i = 0;
        int j = m;
        int x = 0;
        int y = m-1;
        while(j<arr.size()){
            if (g[i] == 1) sum -= arr[i];
            if (g[j] == 1) sum += arr[j];
            if(sum > res){
                res = sum;
            }
            i++;
            j++;
        }
        int ans = 0;
        for(int k = 0; k<arr.size(); k++){
            // if(k >= x && k <= y){
            //     continue;
            // }
            if(g[k] == 0){
                ans += arr[k];
            }
        }
        return ans + res;
    }
};