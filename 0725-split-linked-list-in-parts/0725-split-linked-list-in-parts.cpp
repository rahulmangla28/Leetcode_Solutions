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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> res(k);

        if (root == nullptr) {
            return res;
        }

        ListNode* curNode = root;
        int count = 0;

        while (curNode != nullptr) {
            curNode = curNode->next;
            ++count;
        }

        int size = count / k, rem = count % k;

        curNode = root;
        for (int i = 0; i < k; i++) {
            ListNode* dummy = new ListNode(0);
            ListNode* temp = dummy;

            for (int j = 0; j < size + (i < rem ? 1 : 0); j++) {
                temp->next = new ListNode(curNode->val);
                temp = temp->next;
                curNode = curNode->next;
            }
            res[i] = dummy->next;
        }
        return res;    
    }
};