class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> arr;
        for(int i = 0; i<s.size(); i++){
            string dig;
            while(isdigit(s[i])){
                dig += s[i];
                i++;
                
            }
            if(dig.size()!=0){
                arr.push_back(stoi(dig));
            }
        }
        for(int i = 1; i<arr.size(); i++){
            if(arr[i] <= arr[i-1]){
                return false;
            }
        }
        return true;
    }
};