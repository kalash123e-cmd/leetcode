class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp;
        vector<int> res;
        for(int i = 0; i<arr.size(); i++){
            temp.push_back(arr[i]);
        }
        sort(temp.begin(),temp.end());

        unordered_map<int,int> f;
        int rank = 1;
        for(int i = 0; i<arr.size(); i++){
            if(f.find(temp[i]) == f.end()){
                f[temp[i]] = rank;
                rank++;
            }
        }
        for(int i = 0; i<arr.size(); i++){
            res.push_back(f[arr[i]]);
        }
        return res;
    }
};