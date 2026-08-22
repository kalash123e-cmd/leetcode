class Solution {
public:
    bool checkDivisibility(int n) {
        if(n< 10 ){
            return false;
        }
        // if(n/10 == 1){
        //     return true;
        // }
        int d = 0;
        int k = n;
        int sum = 0;
        int pr = 1;
        while(n>0){
            d = n%10;
            pr = pr*d;
            // if(pr == 0){
            //     pr = 1;
            // }
            sum = sum + d;
            n = n/10;
        }
        if((pr+sum) % k == 0){
            return true;
        }
        if(pr+sum < k){
            if(k % (pr+sum)  == 0){
            return true;
        }
        }
        return false;
    }
};