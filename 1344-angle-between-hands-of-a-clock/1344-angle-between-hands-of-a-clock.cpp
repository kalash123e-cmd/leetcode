class Solution {
public:
    double angleClock(int h, int m) {
       
        double minno = m*6;
        double hno = h*30 + m*0.5;
        double ans = abs(minno - hno) ;
        double res = 360 - ans;
        
        return min(ans,res);
    }

};