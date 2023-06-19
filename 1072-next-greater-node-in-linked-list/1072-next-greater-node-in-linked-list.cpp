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
    vector<int> nextLargerNodes(ListNode* h) {
  vector<int> res, stack;
  for (auto p = h; p != nullptr; p = p->next) res.push_back(p->val);
  for (int i = res.size() - 1; i >= 0; --i) {
    auto val = res[i];
    while (!stack.empty() && stack.back() <= res[i]) stack.pop_back();
    res[i] = stack.empty() ? 0 : stack.back();
    stack.push_back(val);
  }
  return res;
  }
};

 /** We go right-to-left, and maintain the monotonically decreasing stack:

1. We remove elements from the stack until the top of the stack is larger than the current element.
2. We do not need those elements - the current value will be used instead for the remaining elements.
3. The top of the stack is now our next greater element.
4. We push the current element to the stack. */