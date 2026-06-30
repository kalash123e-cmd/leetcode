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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* t = head;
        ListNode* left = head;
        ListNode* x ;
        ListNode* prevx ;
        int times = k;
        int count = 0;
        ListNode* prev = NULL;
        ListNode* curr = t;
            prevx= t;

        while(left != NULL){
            count++;
            left = left->next;
        }    

        while(times-- && curr != NULL){
                ListNode* nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
                count--;
            }
            t = curr;
            head = prev;
        while(t != NULL){
            times = k;
            ListNode* curr = t;
            x= t;
            if(count<k && count != 0){
                prevx->next = t;
                break;
            }
            while(times-- && curr != NULL && count >= times){
                ListNode* nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
                count--;
            }
            // if(k>0){

            // }
            t = curr;
            prevx->next = prev;
            prevx = x;
            x->next = curr;
            if(count == 0){
                break;
            }
            // break;
        }
        // if(k>0){
                
        //     }
        return head;
          
    }
};