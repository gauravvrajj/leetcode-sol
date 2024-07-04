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
    ListNode* mergeNodes(ListNode* head) {
        
        
        int sum=0;
        ListNode* x;
        ListNode* gg;
        int a=0;
        while(head)
        {
            if(head->val==0&&sum!=0)
            {
                if(a==0)
                {
                    x=new ListNode(sum);
                    gg=x;
                    sum=0;
                    a=1;
                }
                else{
                x->next=new ListNode(sum);
                    x=x->next;
                    sum=0;
                }
                
            }
            else
            {
                sum+=head->val;
            }
            
            head=head->next;
            
            
        }
        
        return gg;
        
    }
};