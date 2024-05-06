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
    ListNode* removeNodes(ListNode* head) {
        
        vector<ListNode*>gg;
        while(head)
        {
            gg.push_back(head);
            head=head->next;
        }
        stack<ListNode*>x;
        x.push(gg[0]);
        int i=1;
        while(i<gg.size())
        {
           if(x.top()->val>gg[i]->val)
            {
                x.push(gg[i]);
                i++;
            }
            else{
                while(x.size()&&x.top()->val<gg[i]->val)
                {
                    x.pop();
                }
                x.push(gg[i]);
                i++;
            }      
        }
        vector<ListNode*>ans;
        while(x.size())
        {
            ans.push_back(x.top());
            x.pop();
        }
        
        for(int i=ans.size()-1;i>0;i--)
        {
            ans[i]->next=ans[i-1];
        }
     
        return ans[ans.size()-1];
        
    }
};