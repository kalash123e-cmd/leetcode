class Solution {
public:
    int minRefuelStops(int t, int sf, vector<vector<int>>& st) {
        priority_queue<pair<int,int>> pq;
        if(st.size() != 0 && sf < st[0][0]){
            return -1;
        }
        if(t <= sf){
                return 0;
            }
        if(st.size() == 0){
            if(t <= sf){
                return 0;
            }
            return -1;
        }
        int count = 0;
        long long total = sf;
        int i = 0;
        while(total < t){
            
            while(i<st.size()  && st[i][0] <= total){
                pair<int,int> p = {st[i][1],st[i][0]};
                pq.push(p);
                i++;
            }
            if(pq.empty()){
                return -1;
            }
            
            // sf = sf-pq.top().second;
            total +=  pq.top().first ;
            // sf = sf+pq.top().first;
            // total +=  sf ;
            count++;
            pq.pop();
            
        }
        // if(i == st.size() && total < t){
        //     return -1;
        // }
        return count; 
    }
};