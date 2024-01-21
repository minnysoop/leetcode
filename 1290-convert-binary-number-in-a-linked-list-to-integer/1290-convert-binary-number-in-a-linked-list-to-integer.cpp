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
    typedef long long ll;
    int getDecimalValue(ListNode* head) {
        
        int n = 0;
        ListNode* t = head;
        while (t != nullptr){
            n++;
            t = t->next;
        }
        
        ll res = 0;
        ListNode* b = head;
        while (b != nullptr){
            int v = b->val;
            res += v * pow(2, n - 1);
            n--;
            b = b->next;
        }
        
        return res;
    }
};