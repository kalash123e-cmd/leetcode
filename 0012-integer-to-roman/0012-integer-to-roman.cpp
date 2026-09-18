class Solution {
public:
    string intToRoman(int n) {
        int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string sym[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int i = 0;
        string res;
        while(i < 13 && n>0){
            if(val[i]<=n){
                res += sym[i];
                n = n-val[i];
            }
            else{
                i++;
            }
        }
        return res;
    }
};