class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,rem=0;
        while(numBottles>=numExchange)
        {
            ans+=numBottles/numExchange;
            rem=numBottles%numExchange;
            numBottles/=numExchange;
            numBottles+=rem;   

        }
        
       return ans; 
    }
};