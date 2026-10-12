class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<int> pq;
        unordered_map<int,int> f;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        for(auto i : f){
            pq.push(i.second);
        }
        int n = arr.size();
        int x = arr.size()/2;
        int count = 0;
        while(n>x && !pq.empty()){
            count++;
            n = n-pq.top();
            pq.pop();
        }
        return count;
    }
};