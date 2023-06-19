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
        ListNode* a=new ListNode(0,head);
        ListNode* b=a;
        while(head!=nullptr){
            if(head->next!=nullptr && head->val==head->next->val){
                while(head->next!=nullptr && head->val==head->next->val){
                    head=head->next;
                }
                a->next=head->next;
            }
            else{
                a=a->next;
            }
            head=head->next;
        }
        return b->next;
    }
};