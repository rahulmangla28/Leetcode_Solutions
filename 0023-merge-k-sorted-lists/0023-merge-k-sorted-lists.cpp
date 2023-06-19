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
    
    /**  Divide and Conqurer Approach for more optimization 
       Link : https://www.youtube.com/watch?v=BBt9FB5Yt0M
    */
    
    ListNode* merge(ListNode *l1,ListNode *l2) {
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        if(l1->val > l2->val) swap(l1,l2);
        ListNode *res = l1;
        while(l1!=nullptr && l2!=nullptr) {
            ListNode *temp=nullptr;
            while(l1!=nullptr && l1->val<=l2->val) {
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return res;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        if(k==0) return nullptr;
        for(int i=k-1;i>0;i--) {
            lists[i-1]=merge(lists[i],lists[i-1]);
        }
        return lists[0];
    }
};