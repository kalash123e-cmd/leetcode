class Solution {
public:
    int magicalString(int n) {
        if(n <= 3){
            return 1;
        }
        string s = "122";
        int count = 0;
        for(int i = 2; i<n; i++){
            int j = s.size()-1;
            int x = s[i]-'0';
            while(x--){
                if(s[j] == '1'){
                    s += '2';
                }
                else{
                    s += '1';
                    // count++;
                }
            }
            if(s.size() >= n){
                break;
            }
        }
        for(int i = 0; i<n; i++){
            if(s[i] == '1'){
                count++;
            }
        }
        return count;
    }
};