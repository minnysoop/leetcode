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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result_head;
        ListNode* tmp1 = list1;
        ListNode* tmp2 = list2;
        
        if (tmp1 == nullptr && tmp2 == nullptr) {
            return result_head;
        }
        else if (tmp1 == nullptr){
            return tmp2;
        }
        else if (tmp2 == nullptr){
            return tmp1;
        }
        
        if (tmp1->val > tmp2->val){
            result_head = tmp2;
            tmp2 = tmp2->next;
            
        }
        else{
            result_head = tmp1;
            tmp1 = tmp1->next;
        }
        
        ListNode* result_tmp = result_head;
        
        while (tmp1 != nullptr && tmp2 != nullptr){
            if (tmp1->val > tmp2->val){
                result_tmp->next = tmp2;
                tmp2 = tmp2->next;
            }
            else {
                result_tmp->next = tmp1;
                tmp1 = tmp1->next;
            }
            result_tmp = result_tmp->next;
        }
        
        if (tmp1 != nullptr) {
            result_tmp->next = tmp1;
            result_tmp = result_tmp->next;
        }
        if (tmp2 != nullptr){
            result_tmp->next = tmp2;
            result_tmp = result_tmp->next;
        }
        
        return result_head;
    }
};