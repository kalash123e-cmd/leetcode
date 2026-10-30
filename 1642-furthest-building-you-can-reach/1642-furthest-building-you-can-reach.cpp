class Solution {
public:
    int furthestBuilding(vector<int>& arr, int b, int l) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        int i = 1;
        while (i < arr.size() && l != 0) {
            if (arr[i] > arr[i - 1]) {
                pq.push(arr[i] - arr[i - 1]);
                l--;
            }
            i++;
        }

        for (int j = i; j < arr.size(); j++) {
            long long x = arr[j] - arr[j - 1];
            if (arr[j] > arr[j - 1]) {
                if (!pq.empty() && pq.top() < x) {
                    if (b < pq.top()) return j - 1;
            b -= pq.top();
            pq.pop();
            pq.push(x);
                }
                else {
                    if (b < x) {
                        return j - 1;
                    }
                    b -= x;
                }
            }
            // i = j-1;
        }
        return arr.size() - 1;
    }
};