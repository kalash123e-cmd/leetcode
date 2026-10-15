class Solution {
public:
    bool isPossible(vector<int>& arr) {
        if (arr.size() == 1) {
            return arr[0] == 1;
        }
        priority_queue<int> pq;
        long long sum = 0;
        // vector<int> res(arr.size(),1);
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
            pq.push(arr[i]);
        }
        while(pq.top() > 1){
            int mxe = pq.top();
            pq.pop();
            long long remsum = sum - mxe;
            if (remsum == 1) return true;
            long long x = mxe % remsum;
            if (remsum == 0 || mxe <= remsum) return false;
            if(x < 1 ) return false;
                pq.push(x);
            
            sum = remsum + x;
        }
        return true;
    }
};