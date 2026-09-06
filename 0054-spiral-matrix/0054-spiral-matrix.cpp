class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int r = arr.size();
        int c = arr[0].size();
        vector<int> res;
        int minc = 0;
        int maxc = c-1;
        int minr = 0;
        int maxr = r-1;
        int count = 0;
        while(count<r*c){
            for(int i = minc; i<=maxc && count<r*c; i++){
                res.push_back(arr[minr][i]);
                count++;
            }
            minr++;
            for(int i = minr; i<=maxr && count<r*c; i++){
                res.push_back(arr[i][maxc]);
                count++;
            }
            maxc--;
            for(int i = maxc; i>=minc && count<r*c; i--){
                res.push_back(arr[maxr][i]);
                count++;
            }
            maxr--;
            for(int i = maxr; i>=minr && count<r*c; i--){
                res.push_back(arr[i][minc]);
                count++;
            }
            minc++;
        }
        return res;
    }
};