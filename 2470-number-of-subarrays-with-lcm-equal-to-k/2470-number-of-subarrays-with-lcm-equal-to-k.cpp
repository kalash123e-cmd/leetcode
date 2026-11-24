class Solution {
public:
    int subarrayLCM(vector<int>& arr, int k) {
        long long count = 0;
        for(int i = 0 ;i <arr.size(); i++){
            long long x = arr[i];
            for(int j = i; j<arr.size(); j++){
                x = lcm(x,arr[j]);
                if(x==k){
                    count++;
                }
                if(k%x!=0 ){break;}
            }
        }
        return count;
    }
};