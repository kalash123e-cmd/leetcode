class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& arr) {
        unordered_map<double,int> f;
        for(int i = 0; i<arr.size(); i++){
            double ratio = (double)arr[i][0] / arr[i][1];
            f[ratio]++;
        }
        long long count = 0;
        for(auto i : f){
            int x = i.second;
            int y = 1;
            while(x >= 2){
                count += 1*y;
                y++;
                x--;
            }
        }
        return count;
    }
};