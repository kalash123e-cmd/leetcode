class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& arr) {
        unordered_map<int,int> f;
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        for(auto i : f){
            pq.push({i.second,i.first});
        }
        vector<int> res;
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            pq.pop();
            
            int freq1 = p.first;
            int ch1 = p.second;

            if (res.empty() || res.back() != ch1) {

                res.push_back(ch1);
                freq1--;

                if (freq1 > 0) {
                    pq.push({freq1, ch1});
                }
            } else {

                if (pq.empty()) {
                    return {};
                }

                pair<int, int> p2 = pq.top();
                pq.pop();

                int freq2 = p2.first;
                int ch2 = p2.second;

                res.push_back(ch2);
                freq2--;

                if (freq2 > 0) {
                    pq.push({freq2, ch2});
                }

                pq.push({freq1, ch1});
            }

        }
        return res;
    }
};