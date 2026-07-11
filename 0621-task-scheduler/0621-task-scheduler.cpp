class Solution {
public:
    int leastInterval(vector<char>& arr, int k) {
        unordered_map<char,int> f;
        unordered_map<char,int> free;
        priority_queue<pair<int,char>> pq;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            f[arr[i]]++;
            free[arr[i]] = 1;
        }
        for(auto i : f){
            int freq = i.second;
            int task = i.first;
            
            pq.push({freq,task});
        }
        // int free;
        int seat = 1;
        while(!pq.empty()){
            vector<pair<int,char>> pulled ;
            while(!pq.empty()){
                pair<int,char> p = pq.top();
                int fr = pq.top().second;
                pq.pop();
                if(free[fr] <= seat){
                    if(p.first > 1){
                        pq.push({p.first-1,p.second});
                    }
                free[fr] = seat + k + 1;
                break;
                }
                else{
                    pulled.push_back(p);
                }
            }
            for(int i = 0; i<pulled.size(); i++){
                pq.push(pulled[i]);
            }
            seat++;
            // pq.pop();
            // if(seat == 1){
                
            //     p.first--;
            //     free[pq.top().second] = seat + k + 1;
            //     pq.pop();
            //     if(p.first != 0){
            //         pq.push(p);
            //     }
            //     seat++;
            //     continue;
            // }
            // if(free[pq.top().second] <= seat){
                
            //     p.first--;
            //     free[pq.top().second] = seat + k + 1;
            //     pq.pop();
            //     if(p.first != 0){
            //         pq.push(p);
            //     }
            //     seat++;
            // }
            // else{
                
            //     pair<int,char> p2 = {pq.top()};
            //     pq.pop();
            //     if()
            //     free[pq.top().second] = seat + k + 1;
            //     pq.pop();
            //     seat++;
            //     p2.first--;
            //     if(p2.first != 0){
            //         pq.push(p2);
            //     }
            // }

        }
        return seat-1;
    }
};