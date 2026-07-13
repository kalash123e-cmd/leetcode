class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pair<int,vector<int>>> pq;
        for(int i = 0; i<k; i++){
            int dist = (arr[i][0]*arr[i][0]) + (arr[i][1]*arr[i][1]);
            pq.push({dist,arr[i]});
        } 
        for(int i = k; i<arr.size(); i++){
            int dist = (arr[i][0]*arr[i][0]) + (arr[i][1]*arr[i][1]);
            // if(dist > pq.top().first){
            //     continue;
            // }
            pq.push({dist,arr[i]});
            pq.pop();
        }
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};