class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        if(a.size() == 1 || a.size() == 2){
            return false;
        }
        if(a[0] > a[1]){
            return false;
        }
        int i = 1;
        while(i<a.size()){
            if(a[i] > a[i-1]){
                i++;
                continue;
            }
            if(a[i] == a[i-1]){
                return false;
            }
            break;
        }
        if(i == a.size() ){
            return false;
        }
        while(i < a.size()){
            if(a[i] < a[i-1]){
                i++;
                continue;
            }
            if(a[i] == a[i-1]){
                return false;
            }
            return false;
        }
        return true;
    }
};