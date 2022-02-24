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
     ListNode* sortList(ListNode* head) {
        vector<int> ans;
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode *temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(begin(ans),end(ans));
        for(auto i:ans){
            head->val=i;
            head=head->next;
        }
        return dummy->next;
    }
};