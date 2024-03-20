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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        
        ListNode* x=new ListNode(list1->val);
        ListNode* y=x;
        int count=0;
        
        while(list1!=NULL)
        {
          if(count==a-1)
          {   ListNode* z=list1->next;
              x->next=list2;
            
             while(list2!=NULL)
             {
                 list2=list2->next;
                 x=x->next;
             }
              while(count!=b)
              {
                 count++;
                  z=z->next;
              }
           x->next=z;
           // cout<<z->val;
           break;
          }
            else
            {
                x->val=list1->val;
                x->next=list1->next;
                x=x->next;
                list1=list1->next;
                count++;
            }
        }
        return y;
        
    }
};