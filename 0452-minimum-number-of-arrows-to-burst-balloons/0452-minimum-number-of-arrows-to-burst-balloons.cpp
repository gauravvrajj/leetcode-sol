class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int x=points[0][1];
        int count=1,minn=INT_MAX;
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]<=x)
            {
                x=min(x,points[i][1]);
            }
            else
            {
                x=points[i][1];
                count++;
            }
        }
        
        return count;
    }
};