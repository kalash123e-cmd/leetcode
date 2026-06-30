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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* t = head;
        ListNode* before = NULL;
        ListNode* last = NULL;
        ListNode* prev = NULL;
        if(head == NULL){
            return NULL;
        }
        if(left == right){
            return head;
        }
        
        int count = 1;
        int times = right - left + 1;

        while(t != NULL){
            if(count < left){
                before = t;
                t = t->next;
                count++;
                continue;
            }
            last = t;
            ListNode* curr = t;
            while(times > 0 && curr != NULL){
                ListNode* nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
                times--;
                
            }
            // t = curr;
            if(left != 1){
            before->next = prev;
        }
            last->next = curr;
            break;
        }
        if(left == 1){
            return prev;
        }
        else{
            return head;
        }
        // return head;
    }
};