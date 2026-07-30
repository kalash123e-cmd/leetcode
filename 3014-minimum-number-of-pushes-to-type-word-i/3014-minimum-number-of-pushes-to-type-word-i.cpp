class Solution {
public:
    int minimumPushes(string s) {
        // if(s.size() <= 8){
        //     return s.size();
        // }
        // int x = s.size()/8;
        // int y = s.size() % 8;
        // return s.size() + x*y;
int count = 0;
        for(int i = 0; i<s.size(); i++){
            int x = i / 8; 
            count += 1+x;
        }
return count;
    }
};