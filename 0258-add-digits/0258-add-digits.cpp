class Solution {
public:
    int addDigits(int num) {
        while(num > 9){
            int d = num;
            int sum = 0;
            while(d != 0){
                sum += d%10;
                d = d/10;
            }
            num = sum;
            
        }
        return num;
    }
};