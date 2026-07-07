class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int> pq;
        int count = k;
        for(int i = 0; i<arr.size(); i++){
            pq.push(arr[i]);
        }
        // for(int i = 0; i<arr.size(); i++){
            
        // }
        while(count>1){
            pq.pop();
            count--;
        }
        return pq.top();
    }
};