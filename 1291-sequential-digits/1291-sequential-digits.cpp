class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        int arr[9] = {1,2,3,4,5,6,7,8,9};
        // long long d = 0;
        int j = 0;
        for(int j = 0; j < 9; j++){
            long long d = 0;
            for(int i = j; i<9; i++){
                d = d*10+arr[i];
                if(d<=high && d>=low){
                    res.push_back(d);
                }
                if(d>high){
                    break;
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};