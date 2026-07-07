class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        // priority_queue<int> pq;
        // int count = k;
        for(int i = 0; i<k; i++){
            pq.push(arr[i]);
        }
        // for(int i = 0; i<arr.size(); i++){
            
        // }
        for(int i = k; i<arr.size(); i++){
            if(arr[i] > pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};