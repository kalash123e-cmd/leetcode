class Solution {
public:
    bool isPerfectSquare(int n) {
        int i = 1;
        int j = n;
        while(i<=j){
            long long mid = i + (j - i) / 2;
            long long x = mid*mid;
            if(x == n){
                return true;
            }
            if(x < n){
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        return false;
    }
};