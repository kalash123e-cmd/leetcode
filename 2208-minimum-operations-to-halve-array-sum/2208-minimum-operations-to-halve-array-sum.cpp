class Solution {
public:
    int halveArray(vector<int>& arr) {
        priority_queue<double> pq;
        double sum = 0;
        for(int i = 0; i<arr.size(); i++){
            pq.push(arr[i]);
            sum += arr[i];
        }
        int count = 0;
        double x = sum/2.0;
        double diff = 0;
        while(diff < x){
            count++;
            double y = pq.top()/2.0;
            diff += y;
            pq.pop();
            pq.push(y);
        }
        return count;
    }
};