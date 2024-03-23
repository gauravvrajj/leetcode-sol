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
    void reorderList(ListNode* head) {
       
        vector<ListNode*>gg;
        ListNode* temp=head;
        while(temp!=NULL)
        {
          gg.push_back(temp);
            temp=temp->next;
        }
       int n=gg.size();
        int i;
        for(i=0;i<n/2;i++)
        {
           gg[i]->next=gg[n-i-1];
            gg[n-i-1]->next=gg[i+1];
        }
        
        gg[i]->next=NULL;
    
        
    }
};