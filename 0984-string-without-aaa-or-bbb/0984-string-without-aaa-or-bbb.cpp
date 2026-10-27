class Solution {
public:
    string strWithout3a3b(int a, int b) {
        priority_queue<pair<int,char>> pq;
        if(a != 0){
            pq.push({a,'a'});
        }
        if(b != 0){
            pq.push({b,'b'});
        }
        // if(c != 0){
        //     pq.push({c,'c'});
        // }
        string res;

        // int freq = pq.top().first;
        // char ch = pq.top().second;

        pair<int,char> p2;
        pair<int,char> p;
        while(!pq.empty()){
            int freq1 = pq.top().first;
            char ch1 = pq.top().second;
            pq.pop();
            int n = res.size();
            if(n>=2 && res[n-1] == ch1 &&  res[n-2] == ch1){
                // if(pq.empty()){
                //     break;
                // }
                int freq2 = pq.top().first;
                char ch2 = pq.top().second;
                pq.pop();
                res += ch2;
                freq2--;
                if(freq2 > 0){
                    pq.push({freq2,ch2});
                }
                pq.push({freq1,ch1});
            }
            else{
                res += ch1;
                freq1--;
                if(freq1 > 0){
                    pq.push({freq1,ch1});
                }
            }
        }
        return res;
    }
};