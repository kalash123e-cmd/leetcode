class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int n = arr.size();
        int mx = 0;
        int res = -1;
        for(int i = 0; i<n; i++){
            mx = max(arr[i],mx);
        }
        int i = 1;
        int j = mx;
        while(i<=j){
            int speed = (i+j)/2;
            long long time = 0;
            for(int k = 0; k<n; k++){
                time += arr[k]/speed;
                if(arr[k] % speed != 0){
                    time++;
                }
            }
            if(time > h){
                i = speed + 1;
            }
            else{
                res = speed;
                j = speed - 1;
            }
        }
        return res;
    }
};