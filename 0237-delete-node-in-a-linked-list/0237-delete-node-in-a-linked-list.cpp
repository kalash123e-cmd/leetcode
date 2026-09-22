/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // while(head!=NULL && node == head){
        //     head = head->next;
        // }
        // ListNode* t = head;
        // while(t!=NULL && t->next != NULL){
        //     if(t->next == node){
        //         t->next = t->next->next;
        //     }
        //     else{
        //         t = t->next;
        //     }
        // }
        node->val = node->next->val;
        
        // Bypass the next node
        node->next = node->next->next;
    }
};