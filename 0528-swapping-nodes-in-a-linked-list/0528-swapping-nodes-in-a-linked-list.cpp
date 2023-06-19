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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *slow=head;
        ListNode *fast=head;
        
        int n=k-1;
        
        while(k--) fast=fast->next;
        
        while(fast!=nullptr) {
            slow=slow->next;
            fast=fast->next;
        }
        
        fast=head;
        while(n--) fast=fast->next;
        
        int data=slow->val;
        slow->val=fast->val;
        fast->val=data;
        
        return head;
    }
};