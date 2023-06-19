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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode* tail=l2;
        while(tail->next!=nullptr){
            tail=tail->next;
        }
        ListNode* start =l1;
        ListNode* end = l1;
        while(a--!=1) start=start->next;
        while(b--!=0) end=end->next;
        end=end->next;
        start->next=l2;
        tail->next=end;
        return l1;
    }
};