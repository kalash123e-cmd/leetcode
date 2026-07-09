class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
    priority_queue<int> pq;
    for(int i = 0; i<arr.size(); i++){
        pq.push(arr[i]);
    }
    while(pq.size()>1){
        int first = pq.top();
        pq.pop();
        int sec = pq.top();
        pq.pop();
        pq.push(first-sec);
    }
    return pq.top();
    }
};