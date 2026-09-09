class Solution {
public:
    long long countCommas(long long n) {
        long long k = 1000;
        long long c = 0;
        while(n>=k){
            c = c + (n-k+1);
            if(k>LLONG_MAX/1000){
                break;
            }
            k = k*1000;
        }
        return c;
    }
};