class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        vector<int> ps;
        stack<int> st;
        ps.push_back(-1);
        st.push(0);
        for(int i = 1; i<arr.size(); i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                ps.push_back(-1);
                st.push(i);
            }
            else{
                ps.push_back(st.top());
                st.push(i);
            }
        }
        stack<int> b;
        vector<int> ns(arr.size());
        ns[arr.size()-1] = arr.size();
        b.push(arr.size()-1);
        for(int i = arr.size()-1; i>=0; i--){
            while(!b.empty() && arr[b.top()] >= arr[i]){
                b.pop();
            }
            if(b.empty()){
                b.push(i);
                ns[i] = arr.size();
            }
            else{
                ns[i] = b.top();
                b.push(i);
            }
        }
        // reverse(ps.begin(),ps.end());
        int res = 0;
        // int ar = 1;
        for(int i = 0; i<arr.size(); i++){
            int ar = arr[i] * (ns[i]-ps[i]-1);
            res = max(ar,res);
        }
        return res;
    }
};