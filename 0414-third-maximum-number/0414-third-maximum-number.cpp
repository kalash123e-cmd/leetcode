class Solution {
public:
    int thirdMax(vector<int>& arr) {
        unordered_map<long long,int> f;
        if(arr.size() < 3){
            if(arr.size() == 2){
                return max(arr[0],arr[1]);
            }
            else{
                return arr[0];
            }
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        // for(int i = 0 ; i<3; i++){
            
        //     if(f[arr[i]] == 0){
        //         pq.push(arr[i]);
        //         f[arr[i]]++;
        //     }
            
        // }
        for(int i = 0; i<arr.size(); i++){
            
            if(f[arr[i]] == 0){
                f[arr[i]]++;
                pq.push(arr[i]);
                if(pq.size() > 3){
                    pq.pop();
                }
            }
        }
        if (pq.size() < 3) {
            int max_val = pq.top();
            while (!pq.empty()) {
                max_val = max(max_val, pq.top());
                pq.pop();
            }
            return max_val;
        }
        return pq.top();
    }
};