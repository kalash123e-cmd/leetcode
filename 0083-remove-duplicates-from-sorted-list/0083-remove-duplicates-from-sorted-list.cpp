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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> f;
        ListNode* i = head;
        ListNode* res = new ListNode(0);
        ListNode* j = res;
        
        ListNode* t = head;
        // while(t!=NULL){
        //     f[t->val]++;
        //     t = t->next;
        // }

        
        // ListNode* res = j;
        // int count = 1;
        while(i!=NULL){
            f[i->val]++;
            if(f[i->val] == 1){
                j->next = i;
                j=j->next;
            }
            i = i->next;
        }
        j->next = NULL;
        return res->next;
    }
};