class Solution {
public:
    bool judgeSquareSum(int c) {
        // if(c == 4){
        //     return true;
        // }
        long long i = 0;
        long long j = (long long)sqrt(c);
        while(i<=j){
            if(i*i + j*j == c){
                return true;
            }
            if(i*i + j*j < c){
                i++;
            }
            if(i*i + j*j > c){
                j--;
            }
        }
        return false;
    }
};