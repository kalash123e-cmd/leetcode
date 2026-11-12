class Solution {
public:
    int maxDistToClosest(vector<int>& arr) {
        int i = 0; 
        int count = 0;
        while(arr[i] != 1){
            // count++;
            i++;
        }
        int j = arr.size()-1;
        while(arr[j] != 1){
            count++;
            j--;
        }
        int res = max(i,count);
        count = 0;
        for(int k = i; k<=j; k++){
            count++;
            if(arr[k]==1){
                count = 0;
                continue;
            }
            res = max(res,(count+(count%2))/2);
        }
        return res;
    }
};