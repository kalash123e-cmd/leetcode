class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = n;
        long long res = 0;
        long long count = 1;
        long long sum = 0;
        while(x!=0){
            
            long long d = x%10;

            if(d != 0){
                sum = sum+d;
                res = res + count*d;
            }
            else{
                x=x/10;
                continue;
            }
            count = count*10;
            x = x/10;
        }
        return res*sum;
    }
};