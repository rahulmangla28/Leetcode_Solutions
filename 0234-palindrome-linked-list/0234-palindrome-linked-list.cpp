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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* next;
        while(head!=nullptr){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next ;
            fast = fast->next->next;
        }

        slow->next = reverseList(slow->next);
        slow = slow->next;
        while(slow!=nullptr) {
            if(slow->val != head->val) return false;
            slow = slow->next;
            head = head->next;
        }

        return true;
    }
};