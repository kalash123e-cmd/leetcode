class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        unordered_map<int , int> f;
        f[0] =1;
        int res = 0;
        int sum = 0;
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
            int ques = sum%k;
            if(ques < 0){
                ques = ques + k;
            }
            int freq = f[ques];
            res = res + freq;
            f[ques]++;
        }
        return res;
        
    }
};