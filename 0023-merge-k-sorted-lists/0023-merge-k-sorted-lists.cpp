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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
       for(auto it:lists){
          ListNode* temp=it;
          while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
          }
       }
        sort(ans.begin(),ans.end());
        ListNode* node=new ListNode(-1);
        ListNode* temp=node;
        for(int i=0;i<ans.size();i++){
            ListNode* newnode=new ListNode(ans[i]);
            temp->next=newnode;
            temp=temp->next;
        }
        return node->next;
    }
};