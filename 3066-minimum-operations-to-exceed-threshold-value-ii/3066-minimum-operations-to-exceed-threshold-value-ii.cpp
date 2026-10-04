class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int i = 0; i<arr.size(); i++){
            pq.push(arr[i]);
        }
        int count = 0;
        while(pq.top()<k){
            count++;
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            pq.push((a*2) + b);
        }
        return count;
    }
};