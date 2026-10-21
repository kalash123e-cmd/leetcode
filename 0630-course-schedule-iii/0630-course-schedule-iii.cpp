class Solution {
public:
    int scheduleCourse(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        priority_queue<int> pq;
        int count = 0;
        int sum = 0;
        for(int i = 0; i<arr.size(); i++){
            int ld = arr[i][1];
            int d = arr[i][0];
            sum += d;
            pq.push(d);
            if(sum > ld){
                sum -= pq.top();
                pq.pop();
            }
        }
        
        // while(!pq.empty()){
        //     sum += pq.top().second;
        //     int ld = pq.top().first;
            
        //     if(sum <= ld){
        //         count++;
        //     }
        //     else{
        //         sum -= pq.top().second;
        //     }
        //     pq.pop();
        // }
        return pq.size();
    }
};