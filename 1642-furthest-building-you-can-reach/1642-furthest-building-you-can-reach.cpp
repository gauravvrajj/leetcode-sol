class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        int count=0;
        priority_queue<int, vector<int>, greater<int>>gg;
        
        for(int i=0;i<heights.size()-1;i++)
        {  int k=heights[i+1]-heights[i];
         
           if(k>0)
               gg.push(k);
           if(gg.size()>ladders)
           { 
               int x=gg.top();
               bricks-=x;
               gg.pop();
               
           }
           if(bricks<0)
               return i; 
        }
         
        return heights.size()-1;
        
        
    }
};