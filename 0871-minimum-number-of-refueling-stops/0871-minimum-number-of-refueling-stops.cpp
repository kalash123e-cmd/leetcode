class Solution {
public:
    int minRefuelStops(int t, int sf, vector<vector<int>>& st) {
        priority_queue<int> pq;
        // if(st.size() != 0 && sf < st[0][0]){
        //     return -1;
        // }
        // if(t <= sf){
        //         return 0;
        //     }
        // if(st.size() == 0){
        //     if(t <= sf){
        //         return 0;
        //     }
        //     return -1;
        // }
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