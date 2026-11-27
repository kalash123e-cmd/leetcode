class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<bool> vis(arr.size(), false);
        int count = 0;
        int l = arr[0][0];
        int r = arr[0][1];
        for(int i = 0; i<arr.size(); i++){
            // int j = i+1;
            l = arr[i][0];
            r = arr[i][1];
            for (int j = 0; j < arr.size(); j++) {
        if (j == i) continue;
        if (l <= arr[j][0] && arr[j][1] <= r && !vis[j]) {
            bool same = (l == arr[j][0] && r == arr[j][1]);
            if (!same || i < j) {
                count++;
                vis[j] = true;
            }
        }
    }
            // if(l <= arr[i][0] && r <= arr[i][1]){
            //     count++;
            //     continue;
            // }
            
        }
        return arr.size()-count;
    }
};