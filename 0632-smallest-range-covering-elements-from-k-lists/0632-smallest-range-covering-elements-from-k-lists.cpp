class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& arr) {
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        int k = arr.size();
        int mx = INT_MIN; 
        for (int i = 0; i < k; i++) {
            pq.push({arr[i][0], {i, 0}});
            mx = max(mx, arr[i][0]); 
        }
        vector<int> rg = {pq.top().first, mx};
        // int sum = rg[1] - rg[0];
        while (!pq.empty()) {
            int mn = pq.top().first;
            int j = pq.top().second.second;
            int i = pq.top().second.first;
            pq.pop();

            if (mx - mn < rg[1] - rg[0]) {
                rg = {mn, mx};
                // sum = mx - pq.top().first;
            }

            if (j + 1 < arr[i].size()) {
                mx = max(arr[i][j + 1], mx);
                pq.push({arr[i][j + 1], {i, j + 1}});
            } else {
                break;
            }
        }
        return rg;
    }
};