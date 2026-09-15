class Solution {
public:
    int minimumCardPickup(vector<int>& arr) {
        // for(int i = 0; i<arr.size(); i++){

        // }
        vector<int> f(10000000,0);

        // int i = 0;
        int j = 0;
        int res = INT_MAX;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            while(f[arr[i]] == 2){
                res = min(res,i-j+1);
                f[arr[j]]--;
                j++;
            }
        }
        if(res == INT_MAX){
            return -1;
        }
        return res;
    }
};



// [93,94,50,87,89,38,46,16,21,91,57,28,80,92,10,96,18,74,83,27,41,34,36,35,75,3,19,69,98,78,99,31,11,6,29,1,7,71,55,9,84,22,24,64,77,13,48,17,15,63,62,33,49,88,51,43,44,8,12,45,70,85,5,40,23,56,90,2,81,0,82,4,53,37,72,97,52,100,60,67,95,39,65,54,32,25,30,26,58,59,42,73,23]