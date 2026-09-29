/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* t = head->next;
        ListNode* res = new ListNode(0);
        ListNode* x = res;
        int sum = 0;
        while(t!=NULL){
            // sum = sum+t->val; 
            if(t->val == 0){
                // t->next = t->next->next; 
                res->next = new ListNode(sum);
                res = res->next;
                sum = 0;
            }
            else{
                sum = sum+t->val;
                
            }
            t = t->next;
        }
        return x->next;
    }
};