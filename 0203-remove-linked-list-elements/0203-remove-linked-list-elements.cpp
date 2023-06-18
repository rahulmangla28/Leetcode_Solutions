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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val) head=head->next;
        ListNode* prev= new ListNode();
        ListNode* curr=head;
        prev->next=head;
        while(curr!=nullptr){
            if(curr->val==val){
                curr=curr->next;
                prev->next=curr;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};
//                    RECURSIVE APPROACH
// public ListNode removeElements(ListNode head, int val) {
//         if (head == null) return null;
//         head.next = removeElements(head.next, val);
//         return head.val == val ? head.next : head;
// }
// When the input node is an empty node, then there is nothing to delete, so we just return a null node back. (That's the first line)

// When the head of the input node is the target we want to delete, we just return head.next instead of head to skip it. (That's the third line), else we will return head.

// We apply the same thing to every other node until it reaches null. (That's the second line).