class Solution {
public:
    long long countCommas(long long n) {
        long long c = 0;
        long long a = 1000;
        while(n>=a){
            c += ((n - a)+1);
            if(a >= LLONG_MAX/1000){
                break;
            }
            a = a*1000;
        }
        return c;
    }
};