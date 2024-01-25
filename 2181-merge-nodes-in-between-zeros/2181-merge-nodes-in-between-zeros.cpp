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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* r = nullptr;
        ListNode* f = nullptr;
        ListNode* t = head;
        
        int buffer = 0;
        while (t != nullptr){
            if (t->val != 0){
                buffer += t->val;
            }
            else {
                if (buffer != 0){
                    ListNode* c = new ListNode;
                    c->val = buffer;
                    if (r == nullptr){
                        r = c;
                        f = c;
                    }
                    else {
                        r->next = c;
                        r = r->next;
                    }
                }
                buffer = 0;
            }
            t = t->next;
        }
        return f;
    }
};