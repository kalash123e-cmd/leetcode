class Solution {
public:
    int pivotInteger(int n) {
        int i = 1;
        int j = n;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 1; i<=n; i++){
            sum1 = sum1+i;
        }
        for(int i = 1; i<=n; i++){
            sum2 = sum2+i;
            if(sum2 == sum1){
                return i;
            }
            sum1 = sum1-i;
        }
        return -1;
    }
};