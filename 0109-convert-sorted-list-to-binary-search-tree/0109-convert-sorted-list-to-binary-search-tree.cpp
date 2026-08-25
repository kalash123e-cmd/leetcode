class Solution {
public:
    ListNode* mid(ListNode* head, ListNode* &prev){
        ListNode* slow = head;
        ListNode* fast = head;
         prev = NULL;
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        } 
        return slow;
    }
    TreeNode* fun(ListNode* head){
        if(head == NULL){
            return NULL;
        }
        if (head->next == nullptr) {
            return new TreeNode(head->val);
        }
        ListNode* prev = NULL;
        ListNode* md = mid(head,prev);
        TreeNode* node = new TreeNode(md->val);
        if(prev != NULL){
            prev->next = NULL;
        }
        
        node->left = (head == md) ? nullptr : fun(head);
        node->right = fun(md->next);
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        // if(head->next == NULL){
        //     return new TreeNode(head->val);
        // }
        if(head == NULL){
            return NULL;
        }
        return fun(head);
    }
};