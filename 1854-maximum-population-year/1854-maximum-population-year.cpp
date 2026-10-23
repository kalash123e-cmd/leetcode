class Solution {
public:
    int maximumPopulation(vector<vector<int>>& arr) {
        vector<int> diff(2052,0);
        for(int i = 0 ; i<arr.size(); i++){
            diff[arr[i][0]]++;
            diff[arr[i][1]]--;
        }
        vector<int> res(2052);
        res[1950] = diff[1950];
        int y = 1950;
        for(int i = 1951 ; i<2051 ; i++){
            res[i] = res[i-1]+diff[i];
            if(res[i]>res[y]){
                y = i;
            }
        }
        return y;
    }
};