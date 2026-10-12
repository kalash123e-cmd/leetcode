class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& arr, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i<arr.size(); i++){
            pq.push({arr[i][k],i});
        }
        int i = 0;
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back(arr[pq.top().second]);
            pq.pop();
            i++;
        }
        return res;
    }
};