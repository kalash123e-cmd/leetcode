class Solution {
public:
    int fib(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1 ){
            return 1;
        }
        int a = 0;
        int b = 1;
        int fibo ;
        for(int i = 2; i<=n; i++){
            fibo = a+b;
            a = b;
            b = fibo;
        }
        return fibo;
        // return fib(n - 1) + fib(n - 2);
    }
};