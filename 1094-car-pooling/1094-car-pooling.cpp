class Solution {
public:
    bool carPooling(vector<vector<int>>& arr, int c) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
});
        
        int pas = arr[0][0];
        int pick = arr[0][1];
        int drop = arr[0][2];
        int sum = pas;
        if(sum > c){
            return false;
        }
        pq.push({drop,pas});
        for(int i = 1; i<arr.size(); i++){
            while(!pq.empty() && arr[i][1] >= pq.top().first){
                sum -= pq.top().second;
                pq.pop();
            }
            sum += arr[i][0];
            if(sum > c){
                return false;
            }
            pq.push({arr[i][2],arr[i][0]});
        }
        return true;
    }
};