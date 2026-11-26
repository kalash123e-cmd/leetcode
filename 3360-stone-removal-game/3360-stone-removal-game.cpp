class Solution {
public:
    bool canAliceWin(int n) {
        int count = 0;
        int x = 10;
        while(n-x >=0){
            n = n-x;
            x--;
            count++;
            
        }
        if(count%2==0){
            return false;
        }
        return true;
    }
};