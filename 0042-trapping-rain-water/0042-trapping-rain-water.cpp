class Solution {
public:
    int trap(vector<int>& arr) {
        vector<int> lmax(arr.size());
        vector<int> rmax;
        vector<int> res;
        lmax[arr.size()-1] = arr[arr.size()-1];
        rmax.push_back(arr[0]);
        for(int i = 1; i<arr.size(); i++){
            rmax.push_back(max(arr[i],rmax[i-1]));
        }
        for(int i = arr.size()-2; i>=0; i--){
            lmax[i] = max(arr[i],lmax[i+1]);
        }
        // reverse(lmax.begin(),lmax.end());
        int sum = 0;
        for(int i = 0; i<arr.size(); i++){
            sum += min(rmax[i],lmax[i]) - arr[i];
        }
        return sum;
    }
};