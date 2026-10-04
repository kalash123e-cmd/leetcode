class Solution {
public:
    long long maxKelements(vector<int>& arr, int k) {
        priority_queue<long long> pq;
        for(int i = 0; i<arr.size(); i++){
            pq.push(arr[i]);
        }
        long long sum = 0;
        for(int i = 0; i<k; i++){
            long long x = ceil(pq.top()/3.0);
            sum = sum+pq.top();
            pq.pop();
            pq.push(x);
        }
        return sum;
    }
};