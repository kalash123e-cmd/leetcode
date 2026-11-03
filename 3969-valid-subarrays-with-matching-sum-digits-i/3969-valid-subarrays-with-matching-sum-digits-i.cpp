class Solution {
public:
    int last(long long n){
        
        return n%10;
    }
    int first(long long n){
        int f = 0;
        while(n!=0){
            f = n%10;
            n = n/10;
        }
        return f;
    }
    int countValidSubarrays(vector<int>& arr, int x) {
        int count = 0;
        for(int i = 0; i<arr.size(); i++){
            long long sum = 0;
            for(int j = i; j<arr.size(); j++){
                sum += arr[j];
                if(first(sum) == x && last(sum) == x){
                    count++;
                }
            }
        }
        return count;
    }
};