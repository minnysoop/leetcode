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
    bool isPalindrome(ListNode* head) {
        int n = 0;
        ListNode* t = head;
        while (t != nullptr) {
            t = t->next;
            n++;
        }
        
        bool even = true;
        if (n % 2 != 0){
            even = false;
        }
        
        int h = n/2;
        
        vector<int> v1;
        vector<int> v2;
        
        int c = 0;
        ListNode* l = head;
        while (l != nullptr){
            if (c < h) {
                v1.push_back(l->val);
            }
            else {
                v2.push_back(l->val);
            }
            l = l->next;
            c++;
        }
        
        if (even) {
            reverse(v2.begin(), v2.end());
            return v1 == v2;
        }
        else {
            reverse(v2.begin()+1, v2.end());
            for (int i = 0; i<v1.size();i++){
                if (v1[i] != v2[i+1]){
                    return false;
                }
            }
            return true;
        }
    }
};