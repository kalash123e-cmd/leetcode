class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        ListNode* res = new ListNode(0);
        ListNode* t = res;
        priority_queue<pair<int, pair<int, ListNode*>>, 
               vector<pair<int, pair<int, ListNode*>>>, 
               greater<pair<int, pair<int, ListNode*>>>> pq;
        
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] != nullptr) {
                pq.push({arr[i]->val, {i, arr[i]}});
            }
        }
        while(!pq.empty()){
            t->next = new ListNode(pq.top().first);
            t = t->next;
            int x = pq.top().second.first;
            pq.pop();
            if(arr[x]->next != NULL){
                arr[x] = arr[x]->next;
                pq.push({arr[x]->val,{x,arr[x]}});
            }
        }
        return res->next;
    }
};