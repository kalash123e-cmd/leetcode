class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        // vector<int> f(1000000000,0);
        unordered_map<int , int> f;
        vector<int> res;
        // vector<int> ans;
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
            // if(f[arr[i]]>arr.size()/3){
            //     res.push_back(arr[i]);
            // }
        }
        for(int i = 0; i<arr.size(); i++){
            if(f[arr[i]]>arr.size()/3){
                res.push_back(arr[i]);
                f[arr[i]] = 0;
            }
        }
        // for(auto i : u){
        //     ans.push_back(i);
        // }
        //  for(int i = 0; i<arr.size(); i++){
        //     if(f[arr[i]]>arr.size()/3){
        //         res.push_back(arr[i]);
        //     }
        //  }
         return res;
    }
};