class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        // unordered_map<int,int> f;
        // for(int i = 0; i<arr.size(); i++){
        //     f[arr[i]]++;
        // }

    //     int i=0;
    //     int j=arr.size()-1;
    //     while(i<j){
    //         if(arr[i]+arr[j]==k){
    //             return {i,j};
    //         }
    //         if(arr[i]+arr[j]<k){
    //             i++;
    //         }
    //         if(arr[i]+arr[j]>k){
    //             j--;
    //         }
    //     }
    //     return {};
    // }

    for(int i = 0; i<arr.size()-1; i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==k){
                return {i,j};
            }
        }
    }
    return{};
    }
};