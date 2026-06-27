class Solution {
public:
    bool isBalanced(string s) {
        int sum = 0;
        int rum = 0;
        for(int i = 0; i<s.size(); i+=2){
            sum += s[i] - '0';
        }
        for(int i = 1; i<s.size(); i+=2){
            rum += s[i] - '0';
        }
        if(sum == rum){
            return true;
        }
        return false;
    }
};