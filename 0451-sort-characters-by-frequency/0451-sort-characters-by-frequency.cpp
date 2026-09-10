class Solution {
public:
    string frequencySort(string s) {
        string res;
        priority_queue<pair<int,char>> pq;
        vector<int> f(256,0);
        for(int i = 0; i<s.size(); i++){
            f[s[i]]++;
            // if(f[s[i]]>0){
            //     pq.push({f[s[i]],s[i]});
            // }
            
        }
        for(int i = 0; i<256; i++){
            if(f[i]>0){
                pq.push({f[i],(char)i});
            }
            
        }
        while(!pq.empty()){
            for(int i = 0; i<pq.top().first; i++){
                res.push_back(pq.top().second);
            }
            pq.pop();
        }
        return res;
    }
};