class Solution {
public:
    int minimumDeviation(vector<int>& arr) {
        // unordered_map<long long,long long> f;
        // priority_queue<pair<long long,long long>> mx;
        // priority_queue<pair<long long,long long>,vector<pair<long long,long
        // long>>,greater<pair<long long,long long>>> mn;

        priority_queue<long long> mx;
        // priority_queue<long long,vector<long long>,greater<long long>> mn;
        long long mn = LLONG_MAX;
        for (int i = 0; i < arr.size(); i++) {
            // f[i] = arr[i];
            // mn.push(arr[i]);
            long long val = arr[i];
            if (val % 2 != 0) {
                val = val * 2;
            }
            mn = min(mn, val);
            mx.push(val);
        }
        long long mxdif = mx.top() - mn;
        long long x = mx.top();
        while (mx.top() % 2 == 0 ) {
            x = mx.top();
            mx.pop();
            x = x / 2;
            mn = min(mn, x);
            mx.push(x);
            mxdif = (long long)min(mxdif, mx.top() - mn);
        }
        // if(mx.top() != x){

        // }
        return mxdif;
    }
};