class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, el;
        for(int i = 0; i < n ; i++){
            
            if(cnt == 0){
                el = nums[i];
            }
            if(nums[i]  == el){
                cnt++;
            }
            if(nums[i] != el){
                cnt--;
            }
        }
        return el;
    }
};