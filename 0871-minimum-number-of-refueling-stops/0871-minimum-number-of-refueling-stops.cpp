class Solution {
public:
    int minRefuelStops(int t, int sf, vector<vector<int>>& st) {
        priority_queue<int> pq;
        int count = 0;
        long long total = sf;
        int i = 0;
        while(total < t){
            while(i<st.size()  && st[i][0] <= total){
                pq.push(st[i][1]);
                i++;
            }
            if(pq.empty()){
                return -1;
            }
            total +=  pq.top() ;
            count++;
            pq.pop();
            
        }
        return count; 
    }
};