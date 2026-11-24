class Solution {
public:
    int subarrayGCD(vector<int>& arr, int k) {
        long long count = 0;
        for(int i = 0 ;i <arr.size(); i++){
            long long x = arr[i];
            for(int j = i; j<arr.size(); j++){
                x = gcd(x,arr[j]);
                if(x==k){
                    count++;
                }
            }
        }
        return count;
    }
};