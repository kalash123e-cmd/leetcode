class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        // priority_queue<int> pq;
        // int count = k;
        for(int i = 0; i<arr.size(); i++){
            if(pq.size() < k){
            pq.push(arr[i]);
            continue;
            }
            pq.push(arr[i]);
            pq.pop();
        }
        // for(int i = 0; i<arr.size(); i++){
            
        // }
        // for(int i = k; i<arr.size(); i++){
        //     if(arr[i] > pq.top()){
                // pq.pop();
                // pq.push(arr[i]);
        //     }
        // }
        return pq.top();
    }
};