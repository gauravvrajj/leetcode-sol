class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       long tot=0;
        for(auto i:nums)
         tot^=i;
        long rightbit=(tot&(tot-1))^tot;
        
        int num1=0,num2=0;
        for(auto i:nums){
            if((i&rightbit)==0)
                num1^=i;
            else
                num2^=i;
        }
        
        return {num1,num2};
    }
};