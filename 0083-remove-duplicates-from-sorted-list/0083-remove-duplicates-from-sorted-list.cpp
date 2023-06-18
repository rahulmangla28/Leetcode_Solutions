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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* d1=head;
        ListNode* curr=head->next;
        while(curr!=nullptr){
            if(head->val==curr->val){
                curr=curr->next;
                head->next=curr;
            }
            else {
                head=head->next;
                curr=curr->next;
            }
        }
        return d1;
    }
};