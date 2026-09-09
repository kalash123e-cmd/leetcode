// class Solution {
// public:
//     long long countCommas(long long n) {
//         long long c = 0;
//         if(n<1000){
//             return 0;
//         }
//         // // int count = 0;
//         if(n>=1000 && n<1000000){
//             return n-999;
//         }
//         int t = n;
//         // // while(n!=0){
//         // //     count++;
//         // //     n/10;
//         // // }
//         int x = 2;
//         // // n = t;
//         long long a = 1000000;
//         long long b = 0;
//         int z = 1;
//         c = 999000;
//         while(t!=0 || t!=1){
//             // z = ((n%a))*x;
//             c += ((n % a)+1)*x;
//             if(x == 2){
//                 t = t/1000000;
//             }
//             else{
//                 t = t/1000;
//             }
//             z++;
//             // b = a;
//             a = a*1000;
//             x++;
            
//         }
//         // c = c-z;
//         return c;

//         // return 1000000 -
//     }
// };

class Solution {
public:
    long long countCommas(long long n) {
        long long totalCommas = 0;
        long long threshold = 1000; // Starts at 1,000 (where 1st comma appears)
        
        while (n >= threshold) {
            // Add all numbers from `threshold` up to `n` that have at least one more comma
            totalCommas += (n - threshold + 1);
            
            // Move to the next threshold (1,000,000 then 1,000,000,000 etc.)
            // Prevent overflow by checking if threshold can be multiplied safely
            if (threshold > LLONG_MAX / 1000) break;
            threshold *= 1000;
        }
        
        return totalCommas;
    }
};