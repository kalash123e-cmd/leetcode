class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next  == NULL || head->next == NULL || head == NULL){
            return {-1,-1};
        }
        vector<int> res;
        ListNode* t = head;
        int x = t->val;
        t = t->next;
        int count = 1;
        int f = 0;
        int g = 0;
        int mindis = INT_MAX;
        while(t!=NULL && t->next!=NULL){
            count++;
            if((t->val < x && t->val < t->next->val) || (t->val > x && t->val > t->next->val)){
                if(f == 0){
                    f = count;
                }
                else{
                    // g = f;
                    if(mindis == INT_MAX){
                        g = f;
                    }
                    mindis = min(mindis,count-g);
                    g = count;
                }
            }
            x = t->val;
            t = t->next;
        }
        if(mindis == INT_MAX){
            return {-1,-1};
        }
        return {mindis,g-f};
    }
};