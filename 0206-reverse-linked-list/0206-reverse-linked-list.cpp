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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr){
            return head;
        }
        
        
        vector<int>v;
        
        ListNode* t = head;
        while (t != nullptr){
            v.push_back(t->val);
            t = t->next;
        }
        
        reverse(v.begin(), v.end());
        
        ListNode* r = new ListNode;
        r->val = v[0];
        ListNode* h = r;
        for (int i=1;i<v.size();i++){
            ListNode* c = new ListNode;
            c->val = v[i];
            r->next = c;
            r = r->next;
        }
        
        return h;
    }
};