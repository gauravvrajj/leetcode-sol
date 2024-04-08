class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        queue<int>x;
        for(auto i:students)
            x.push(i);
        int j=0,count=0;
        while(x.size())
        {  
           int i=x.front();
           if(i==sandwiches[j])
           {
               x.pop();
               j++;
               count=0;
           }
           else
           {
               x.pop();
               x.push(i);
               count++;
           }
           if(count==x.size())
           return x.size();
        }
        
        return 0; 
    }
};