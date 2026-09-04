class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int> a(arr.size());
        vector<int> b(arr.size());
        long long suf = 1;
        long long pre = 1;
        for(int i = 0; i<arr.size(); i++){
            pre = pre*arr[i];
            a[i] = pre;
        }
        for(int i = arr.size()-1; i>=0; i--){
            suf = suf*arr[i];
            b[i] = suf;
        }
        vector<int> res(arr.size());
        res[0] = b[1];
        res[arr.size()-1] = a[arr.size()-2];
        for(int i = 1; i<arr.size()-1; i++){
            res[i] = a[i-1]*b[i+1];
        }
        return res;
    }
};