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
    ListNode* insertionSortList(ListNode* head) {
        priority_queue<int, vector<int>, greater<int>> pq;
        ListNode* res = new ListNode(0);
        ListNode* t = res;
        while(head!=NULL){
            pq.push(head->val);
            head = head->next;
        }
        while(!pq.empty()){
            t->next = new ListNode(pq.top());
            t = t->next;
            pq.pop();
        }
        return res->next;
    }
};