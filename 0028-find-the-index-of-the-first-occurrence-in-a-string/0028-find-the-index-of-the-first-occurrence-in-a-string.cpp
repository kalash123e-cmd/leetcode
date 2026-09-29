class Solution {
public:
    int strStr(string h, string n) {
        int i = 0;
        int k = 0;
        while(i<h.size()){
            int j = 0;
            i = k;
            int x = n.size();
            while(i<h.size() && j<n.size() && h[i] == n[j]){
                x--;
                i++;
                j++;
            }
            // if(x == n.size()){
            //     i++;
            //     continue;
            // }
            if(x == 0){
                return i-j;
            }
            k++;
        }
        return -1;
    }
};