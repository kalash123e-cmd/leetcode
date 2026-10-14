class Solution {
public:
    bool isPalindrome(int n) {
        int temp = n;
        int rev=0;
        while(n!=0 && n>0){
            int num= n%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
        return 0;
    }
            rev=rev*10 + num;
            n=n/10;
        }
        if(rev==temp){
         return 1;}
         else {return 0;}
    }
};