class Solution {
public:
    ListNode* modifiedList(vector<int>& arr, ListNode* head) {
        
        vector<int> f(100005,0);
        for(int i = 0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        while(head != NULL && f[head->val] > 0){
            head = head->next;
        }

        // ListNode* res = NULL;
        ListNode* t = head;
        while(t != NULL && t->next != NULL){
            if(f[t->next->val] > 0){
                t->next = t->next->next;
                // t = t->next;
                // continue;
            }
            else{
                t = t->next;
            }
            // if(res == NULL){
                // t=t->next;
            //     continue;
            // }
            // res->next = t;
        }
        return head;
    }
};