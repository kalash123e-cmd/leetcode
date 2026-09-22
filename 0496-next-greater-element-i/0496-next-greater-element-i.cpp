class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
        vector<int> f(100000,0);
        int n = arr.size();
        vector<int> ng(n);
        f[arr[n-1]] = n-1;
        stack<int> st;
        ng[n-1]=-1;
        st.push(arr[n-1]);
        for(int i = n-2; i>=0; i--){
            f[arr[i]] = i;
            while(!st.empty() && st.top()<arr[i]){
                st.pop();
            }
            if(st.empty()){
                ng[i] = -1;
                st.push(arr[i]);
            }
            else{
                ng[i] = st.top();
                st.push(arr[i]);
            }
        }
        vector<int> res;
        for(int i = 0; i<nums1.size(); i++){
            res.push_back(ng[f[nums1[i]]]);
        }
        return res;
    }
};