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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        vector<int>arr;
        while(head!=NULL)
        {
            arr.push_back(head->val);
            head=head->next;
        }
        vector<int>an;
        for(int i=1;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]||arr[i]<arr[i+1]&&arr[i]<arr[i-1])
                an.push_back(i+1);
        }
        if(an.size()<2)
            return {-1,-1};
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<an.size()-1;i++)
        {
         minn=min(an[i+1]-an[i],minn);
         maxx=max(an[an.size()-1-i]-an[i],maxx);
        }
        
        return {minn,maxx};
    }
};