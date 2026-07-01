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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* left = head;
        int count = 0;
        ListNode* t = head;
        ListNode* prev;
        ListNode* first;
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        
        
        while(left != NULL){
            count++;
            prev = left;
            left = left->next;
        } 
        
        k = k%count;
        if(k == 0){
            return head;
        }
        ListNode* x = t;
        while(t != NULL && count--){
             first = t->next;
            // head = first;
            if(count == k){
                t->next = NULL;
                prev->next = x;
            }
            t = t->next;

        }
        head = first;
        return head;
        
    }
};