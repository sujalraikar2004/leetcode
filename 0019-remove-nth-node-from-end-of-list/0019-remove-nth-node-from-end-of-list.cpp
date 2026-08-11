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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        if(cnt==1)return nullptr;
        if(n==cnt){
            ListNode* newnode=head->next;
            delete head;
            return newnode;
        }
        int move=cnt-n;
        ListNode* str=head;
        ListNode* prev=nullptr;
        while(move>0){
            prev=str;
            str=str->next;
            move--;
        }
        prev->next=str->next;
        delete str;
        return head;
    }
};