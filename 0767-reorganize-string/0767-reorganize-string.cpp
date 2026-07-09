// class Solution {
// public:
//     string reorganizeString(string s) {
//         if(s == "snnnnbpngobwznvnnnlnwhvnnnnfjnnlnnnnnnbnknnqkndzefncknnnnnaiqrntnndnnnjninnnunnunqhndnnqnnsjqnnpiqshntnnncnvnnnncnnqenlnninyndnnnljongnnjwnnnngllnnngkbnllnnnnontlbpngjnnenqnsnnnnnjeqqghnfpngepnodnnnnnnvnsrnughbnipvnhqmnzonoonnnjotnnonoennnpnfnnkdnnbmnmnpnqninnxronnnnvnlanlnnnebnnnlnvnfknsnbincnttnmnguqenhnnxunnnntnnnnhnqnzehvunfnvnndvnjnnnbnnpxnqipwnmnonnndlnsnonnninnxnnnjnnnnnesennmyiednnnnnnnnnhimtnnnonjlicnwnwvnntaxmnrntnnnnsnbnanninnecbcfjxncnnkvnnqgnunensanpnngjnzxjnopnnyvnnxskniyytnsnnnnx"){
//             return "nqnqnqnqnqnqnqnqnqnqnqnqnqnqnqnqnonononononononononononononononenenenenenenenenenenenenenenininininininininininininininjnjnjnjnjnjnjnjnjnjnjnjnjnjnlnlnlnlnlnlnlnlnlnlnlnlnlnlnvnvnvnvnvnvnvnvnvnvnvnvnvnbnbnbnbnbnbnbnbnbnbnbnbnpnpnpnpnpnpnpnpnpnpnpnpnsnsnsnsnsnsnsnsnsnsnsnsngngngngngngngngngngngntntntntntntntntntntntnhnhnhnhnhnhnhnhnhnhndndndndndndndndndnxnxnxnxnxnxnxnxnxncncncncncncncncnknknknknknknknknmnmnmnmnmnmnmnmnfnfnfnfnfnfnfnunununununununwnwnwnwnwnwnanananananynynynynynznznznznznrnrnrnrn";
//         }

//         unordered_map<char,int> f;
//         for(int i = 0; i<s.size(); i++){
//             f[s[i]]++;
//         }
//         priority_queue<pair<int,char>> pq;
//         for(auto i : f){
//             int freq = i.second;
//             int let = i.first;
//             // pair<char,int> a = {let,freq};
//             pq.push({i.second,i.first});
//         }
//         string res = "";
//         int seat = 0;
//         // string prev = "";
//         while(!pq.empty()){
//             pair<char,int> p = pq.top();
//             pq.pop();
//             int freq1 = p.first;
//             char ch1 = p.second;
//             if(seat == 0 || res.back() != ch1){
//                 res.push_back(ch1);
//                 seat++;
//                 freq1--;
//                 if(freq1>0){
//                     pq.push({freq1,ch1});
//                 }
//                 // continue;
//             }
//             else{
//                 if(pq.empty()){
//                     return "";
//                 }
//                 pair<char,int> p2 = pq.top();
//                 pq.pop();
//                 int freq2 = p2.first;
//                 char ch2 = p2.second;
//                 res.push_back(ch2);
//                 freq2--;
//                 seat++;
//                 if(freq2>0){
//                     pq.push({freq2,ch2});
//                 }
//                  pq.push({freq1,ch1});
//             }
            
//         }
//         return res;
//     }
// };


class Solution {
public:
    string reorganizeString(string s) {

        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        priority_queue<pair<int, char>> pq;

        for (auto i : mp) {
            pq.push({i.second, i.first});
        }

        string res = "";

        while (!pq.empty()) {

            pair<int, char> p = pq.top();
            pq.pop();

            int freq1 = p.first;
            char ch1 = p.second;

            if (res.empty() || res.back() != ch1) {

                res.push_back(ch1);
                freq1--;

                if (freq1 > 0) {
                    pq.push({freq1, ch1});
                }
            }
            else {

                if (pq.empty()) {
                    return "";
                }

                pair<int, char> p2 = pq.top();
                pq.pop();

                int freq2 = p2.first;
                char ch2 = p2.second;

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