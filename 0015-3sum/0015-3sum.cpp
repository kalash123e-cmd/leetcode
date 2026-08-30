class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
            vector<vector<int>> res;
            map<vector<int>,int> f;
            for(int i = 0; i<arr.size()-2; i++){
                int j = i+1;
                int k = arr.size()-1;
                while(j<k){
                    if(arr[j] + arr[k] == abs(arr[i])){
                        vector<int> temp;
                        // f[temp]++;
                        // if(f[temp] <1 ){
                            
                        // }
                        temp = {arr[i],arr[j],arr[k]};
                        f[temp]++;
                        if(f[temp] <2 ){
                            res.push_back(temp);
                        }
                        
                        // break;
                        j++;
                        k--;
                        // while(arr[j] == arr[j-1] && j<k){
                        //     j++;
                        // }
                        // while(arr[k] == arr[k+1]&& j<k){
                        //     k--;
                        // }
                        continue;
                    }
                    if(arr[j] + arr[k] < abs(arr[i])){
                        j++;
                        continue;
                    }
                    if(arr[j] + arr[k] > abs(arr[i])){
                        k--;
                        continue;
                    }
                }

            }
            return res;
        
    }
};