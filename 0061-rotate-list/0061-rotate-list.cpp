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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* res;

        for(int i=0;i<k;i++) {
            if (fast->next == nullptr) {
                k = k%(i+1);//if k is greater than the length of the list, make k = k%length
                i = -1; // and count from the beginning again
                fast = head;
            } else {
                fast = fast->next;
            }
        }

        while(fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        fast->next = head;
        res = slow->next;
        slow->next = nullptr;

        return res;
    }
};