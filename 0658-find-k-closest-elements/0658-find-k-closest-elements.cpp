class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        vector<int> res;
        for(int i = 0; i<k; i++){
            int dist = (abs(arr[i] - x));
            pq.push({dist,arr[i]});
        }
        for(int i = k; i<arr.size(); i++){
            int dist = (abs(arr[i] - x));
            if(dist > pq.top().first){
                continue;
            }
            pq.push({dist,arr[i]});
            pq.pop();
            
        }
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};