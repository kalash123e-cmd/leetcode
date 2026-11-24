class Solution {
public:
    int maxLength(vector<int>& arr) {
        int l = 0;
        int res = 0;
        for(int i = 0; i<arr.size(); i++){
            long long p = 1;
            long long x = arr[i];
            long long y = arr[i];
            for(int j = i; j<arr.size(); j++){
                if (p > LLONG_MAX / arr[j]) {
                    break;
                }
                p *= arr[j];
                x = gcd(x,arr[j]);
                y = lcm(y,arr[j]);
                if(p == x*y){
                    l = max(l,j-i+1);
                }
            }
        }
        return l;     
    }
};