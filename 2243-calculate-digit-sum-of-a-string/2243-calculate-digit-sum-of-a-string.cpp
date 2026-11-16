class Solution {
public:
    int fun(int l, int h, int n, string s){
        int sum = 0;
        for(int i = l; i<=h && i<n; i++){
            sum += s[i] - '0';
        }
        return sum;
    }
    string digitSum(string s, int k) {
        // for(int i = 0; i<s.size(); i++){

        // }
        while(s.size()>k){
            int i = 0;
            int j = k-1;
            // if(j >= s.size()){
            //     j = s.size()-1;
            // }
            string t;
            int n = s.size();
while (i < n) {
    t += to_string(fun(i, i + k - 1, n, s));
    i += k;
}
            s = t;
        }
        return s;
    }
};