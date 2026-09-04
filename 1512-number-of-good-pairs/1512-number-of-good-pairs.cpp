class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        int i = 0;
        int j = i+1;
        int count = 0;
        while(i<arr.size()-1 && j<arr.size()){
            if(arr[j] == arr[i]){
                count++;
            }
            j++;
            if(j == arr.size()){
                i++;
                j = i+1;
            }
        }
        return count;
    }
};