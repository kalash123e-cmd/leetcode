class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int i = 0;
        int j = 1;
        int count = 0;
        for(i = 0; i<arr.size(); i++){
            for(int j = i+1; j<arr.size(); j++){
            if(arr[j][0] <= arr[i][1]){
                count++;
                // j++;
            }
            else{
                break;
            }
                // i++;
        }
        }
        return count;
    }
};