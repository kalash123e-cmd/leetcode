class Solution {
public:
    int minAddToMakeValid(string s) {
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                count1++;
            }
            else if(s[i] == ')' && count1>0){
                count1--;
            }
            else{
                count2++;
            }
        }
        return abs(count1+count2);
    }
};