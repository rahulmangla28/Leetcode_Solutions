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
    ListNode* partition(ListNode* head, int x) {
        ListNode* less=new ListNode();
        ListNode* high=new ListNode();
        ListNode* a=less;
        ListNode* b=high;
        while(head!=nullptr){
            if(head->val<x){
                less->next=head;
                less=less->next;
            }
            else{
                high->next=head;
                high=high->next;
            }
            head=head->next;
        }
        high->next=nullptr;
        less->next=b->next;
        return a->next;
    }
};