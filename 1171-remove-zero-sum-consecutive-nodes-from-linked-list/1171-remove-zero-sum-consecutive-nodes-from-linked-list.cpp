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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int>gg;
        int sum=0;
        while(head!=NULL)
        {
            gg.push_back(head->val);
            head=head->next;
        }
        
        while(gg.size())
        {
            bool b=0;
            for(int i=0;i<gg.size();i++)
            {   int sum=0;
                b=0;
                for(int j=i;j<gg.size();j++)
                {
                    sum+=gg[j];
                     if(sum==0)
                     {   b=1;
                         gg.erase(gg.begin() + i, gg.begin() + j + 1);
                         break;
                     }
                }
             if(b)
                 break;
            }
            if(b==0)
                break;
        }
        
        if(gg.size()==0)
            return NULL;
        
        
        ListNode* x=new ListNode();
        ListNode* g=x;
        for(int i=0;i<gg.size();i++)
        {  
            x->val=gg[i];
            if(i<gg.size()-1)
            {
            ListNode* y=new ListNode();
            x->next=y;
            }
            x=x->next;
        }
        
        return g;
    }
};