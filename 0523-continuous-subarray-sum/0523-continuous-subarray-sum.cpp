class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        if(nums.size()<=1)return false;
        unordered_map<int,int>gg;
        gg[0]=1;
        int ans=0,count=0,zero=0;
        for(int i=0;i<nums.size();i++)
        {
          ans+=nums[i];
          if(nums[i]==0)
          {
              zero++;
              if(zero>=2)return true;
              continue;
          }
          else
          { if(zero&&gg.count(ans%k))return true;
              zero=0;
          }
          if(nums[i]!=0&&nums[i]%k==0&&ans%k!=0)
          {
              count++;
              if(count>=2)return true;
              continue;
          }
          else count=0;
          if(i>0&&ans!=0&&gg.count(ans%k))return true;
          else gg[ans%k]++;
            
        }
        
        return false;
        
    }
};