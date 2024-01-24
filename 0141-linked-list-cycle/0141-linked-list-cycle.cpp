/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* i = head;
        vector<ListNode*>vln;
        while (i != nullptr){
            for (int j=0;j<vln.size();j++){
                if (vln[j] == i){
                    return true;
                }
            }
            vln.push_back(i);
            i = i->next;
        }
        
        return false;
    }
};