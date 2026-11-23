class Solution {
public:
    string largestNumber(vector<int>& arr) {
        string res;
        // sort(res.begin(),res.end());
        for(int i = 0; i<arr.size(); i++){
            for(int j = i; j<arr.size(); j++){
                string a = to_string(arr[i]);
                string b = to_string(arr[j]);
                if(a+b<b+a){
                    swap(arr[i],arr[j]);
                }
            }
        }
        long long sum = -10000000;
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
            res += to_string(arr[i]);
        }
        if(sum == -10000000){
            return "0";
        }
        return res;
    }

};