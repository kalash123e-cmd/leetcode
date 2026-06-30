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
    ListNode* swapPairs(ListNode* head) {
        ListNode* t = head;
        // ListNode* nxt ;
        ListNode* x ;
        ListNode* prevx ;
        int times = 2;
        ListNode* prev = NULL;
        ListNode* curr = t;
            prevx= t;
        while(times-- && curr != NULL){
                ListNode* nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }
            t = curr;
            head = prev;
        while(t != NULL){
            times = 2;
            ListNode* curr = t;
            x= t;
            while(times-- && curr != NULL){
                ListNode* nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }
            // if(curr->next != NULL){
            //     continue;
            // }
            t = curr;
            prevx->next = prev;
            prevx = x;
            x->next = curr;
            
            // continue;
            // x->next = prev;
            // prev->next = curr;
            
            // }
            // break;
        }
        return head;
    }
};