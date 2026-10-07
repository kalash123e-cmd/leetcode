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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* res = new ListNode(0);
        ListNode* t = res;
        // if (i->val <= j->val) {
        //     head = i;
        //     i = i->next;
        // } else {
        //     head = j;
        //     j = j->next;
        // }
        while (i != NULL && j != NULL) {
            if (i->val <= j->val) {
                t->next = new ListNode(i->val);
                t = t->next;
                i = i->next;
            } else {
                t->next = new ListNode(j->val);
                t = t->next;
                j = j->next;
            }
        }
        while(i!=NULL){
            t->next = new ListNode(i->val);
            t = t->next;
            i = i->next;
        }
        while(j!=NULL){
            t->next = new ListNode(j->val);
            t = t->next;
            j = j->next;
        }
        return res->next;
    }
};