class Solution {
public:
    long long maxScore(vector<int>& arr, vector<int>& brr, int k) {
        vector<vector<int>> loda;
        for(int i = 0; i<arr.size(); i++){
            loda.push_back({arr[i],brr[i]});
        }
        sort(loda.rbegin(),loda.rend());    // [[3,3],[3,1],[2,4],[1,2]]

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        long long sum = 0;
        for(int i = 0; i<k; i++){
            sum += loda[i][0];
            pq.push({loda[i][1],loda[i][0]});
        }
        long long res = sum * pq.top().first;
        sum -= pq.top().second;
        pq.pop();
        for(int i = k; i<loda.size(); i++){
            sum += loda[i][0];
            pq.push({loda[i][1],loda[i][0]});
            res = max(res,sum*pq.top().first);
            sum -= pq.top().second;
            pq.pop();
        }
        return res;
    }
};