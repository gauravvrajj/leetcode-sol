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
        ListNode* prev=head;
         ListNode* temp=head;
        while(head!=NULL&&head->next!=NULL)
        {
          temp=head->next;
          head->next=head->next->next;
          temp->next=prev;
          prev=temp;
        }
        return temp;
    }
};