class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& prr, vector<int>& crr) {
        vector<pair<int,int>> p;
        priority_queue<int> pq;
        int n = prr.size();
        int i = 0;
        int j = 0;
        while(i<n && j<n){
            p.push_back({crr[j],prr[i]});
            i++;
            j++;
        }
        sort(p.begin(),p.end());
        int count = 0;
        int idx = 0;
        k = k;
        while(count < k){
            // idx = 0;
            while(idx<n){
                if(p[idx].first > w){
                    break;
                }
                pq.push(p[idx].second);
                idx++;
            }
            if(pq.empty()){
                return w;
            }
            w = w+pq.top();
            count++;
            pq.pop();
        }
        return w;
    }
};