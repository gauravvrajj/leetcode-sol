class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int a=0,b=0,count=0;
        for(int i=0;i<arr.size();i++)
        {  a=arr[i];
            for(int j=i+1;j<arr.size();j++)
            {  
               for(int k=j;k<arr.size();k++)
               {
                 b^=arr[k];
                 if(b==a) 
                     count++;
               }
             a^=arr[j];
             b=0;
            }
         
        }
        
        return count;
        
    }
};