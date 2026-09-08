// struct Compare {
//     bool operator()(pair<string, int>& a, pair<string, int>& b) {
//         // If frequencies are the same, we want the lexicographically
//         // SMALLER word to stay in the heap (be considered "greater").
//         if (a.second == b.second) {
//             return a.first > b.first; // Reverse the order for the heap
//         }
//         // If frequencies differ, we want the LOWER frequency to be popped
//         first. return a.second > b.second;
//     }
// };
struct Compare {
    bool operator()(const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second) {
            // For ties in frequency, we want the lexicographically LARGER word
            // at the top so it gets popped/evicted first.
            return a.first < b.first;
        }
        // We want the LOWER frequency at the top so it gets popped first.
        return a.second > b.second;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& s, int k) {
        int n = s.size();
        priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> pq;
        unordered_map<string, int> f;
        for (int i = 0; i < n; i++) {
            f[s[i]]++;
        }
        for (auto i : f) {
            string word = i.first;
            int freq = i.second;
            pair<string, int> curr = {word, freq};
            if (pq.size() < k) {
                pq.push(curr);
                continue;
            }
            pq.push(curr);
            pq.pop();
        }
        vector<string> res;
        while (!pq.empty()) {
            res.push_back(pq.top().first);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};