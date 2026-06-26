class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        vector<int> res;
        int n = arr.size();
        stack<int> st;
        for(int i = n-2; i>=0; i--){
            st.push(arr[i]);
        }
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                res.push_back(-1);
                st.push(arr[i]);
            }
            else{
                res.push_back(st.top());
                st.push(arr[i]);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};