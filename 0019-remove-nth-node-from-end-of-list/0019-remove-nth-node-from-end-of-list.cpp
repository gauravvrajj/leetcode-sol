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
        int k=0,size=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            size++;
        }
        n=size-n;
        if(n==k)
        return head->next;
        temp=head;
        while(1)
        {
          if(k==n-1)
           {
              ListNode* t=temp->next->next;
              delete temp->next;
              temp->next=t; 
              break;
           }
            temp=temp->next;
            k++;  
        } 
        return head;  
    }
};