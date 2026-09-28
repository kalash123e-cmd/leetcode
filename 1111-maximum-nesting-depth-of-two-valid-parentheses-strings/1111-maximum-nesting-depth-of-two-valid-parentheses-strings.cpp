class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        vector<int> res;
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
                res.push_back(count%2);
            }
            else{
                res.push_back(count%2);
                count--;
            }
            // if(count%2 == 0){
            //     res.push_back(1);
            // }
            // else{
            //     res.push_back(0);
            // }
        }
        return res;
    }
};