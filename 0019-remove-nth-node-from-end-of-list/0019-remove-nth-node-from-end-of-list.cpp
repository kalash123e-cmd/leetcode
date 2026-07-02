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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t = head;
        ListNode* i = head;
        int count = 0;
        // if(head->next = NULL){
        //     return NULL;
        // }
        
        while(t != NULL){
            count++;
            t = t->next;
        }
        
        if(count == 1 ){
            return NULL;
        }
        if(count == n){
            return head->next;
        }
        while(count-- && i != NULL && i->next != NULL){
            // ListNode* nxt = i->next->next;
            if(count == n){
                i->next = i->next->next;;
                break;
            }
            else{
            i = i->next;
            }
        }
        return head;
    }
};