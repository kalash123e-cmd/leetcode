class Solution {
public:
    int maximumProduct(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0; i<arr.size(); i++){
            pq.push(arr[i]);
        }
        long long pr = 1;
        // for(int i = k; i>=0; i--){

        // }
        while(k!=0){
            int x = pq.top();
            pq.pop();
            x += 1;
            pq.push(x);
            k--;
        }
        while(!pq.empty()){
            pr = (pr * pq.top()) % 1000000007;
            pq.pop(); 
        }
        return pr;
    }
};