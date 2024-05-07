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
    ListNode* doubleIt(ListNode* head) {
        
        vector<int>gg;
        while(head)
        {
            gg.push_back(head->val);
            head=head->next;
        }
        int carry=0;
        for(int i=gg.size()-1;i>=0;i--)
        {
            if(gg[i]*2+carry>9)
            {
                gg[i]=(gg[i]*2+carry)%10;
                carry=1;
            }
            else
            {
                gg[i]=(gg[i]*2+carry)%10;
                carry=0;
            }
        }
        ListNode*headd=new ListNode();
        ListNode*ans=headd;
        if(carry==1)
        {
            headd->val=1;
            headd->next=new ListNode();
            headd=headd->next;
            
        }
        
        for(int i=0;i<gg.size();i++)
        {
            headd->val=gg[i];
            if(i!=gg.size()-1){
            headd->next=new ListNode();
            headd=headd->next;}
            
        }
        
        return ans;
        
        
    }
};