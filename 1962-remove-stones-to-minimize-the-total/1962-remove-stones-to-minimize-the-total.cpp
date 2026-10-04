class Solution {
public:
    int minStoneSum(vector<int>& arr, int k) {
        priority_queue<int> pq;
        int total = 0;
        for(int i = 0; i<arr.size(); i++){
            pq.push(arr[i]);
            total += arr[i];
        }
        // long long sum = 0;
        for(int i = 0; i<k; i++){
            int x = pq.top() - floor(pq.top()/2);
            // sum = sum+pq.top();
            total -= floor(pq.top()/2);
            pq.pop();
            pq.push(x);
        }
        // while(!pq.empty()){
        //     sum += pq.top();
        //     pq.pop();
        // }
        return total;
    }
};