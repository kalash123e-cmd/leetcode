class Solution {
public:
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode* t = l1;
        ListNode* t2 = l2;
        ListNode* left = NULL;
        ListNode* right = NULL;
        int count = 0;
        while(right == NULL && t != NULL){
            if(count == a-1){
                left = t;
            }
            if(count == b+1){
                right = t;
                break;
            }
            t = t->next;
            count++;
        }
        while(t2 != NULL){
            if(t2->next == NULL){
                t2->next = right;
                break;
            }
            t2 = t2->next;
        }
        left->next = l2;
        return l1;
    }
};