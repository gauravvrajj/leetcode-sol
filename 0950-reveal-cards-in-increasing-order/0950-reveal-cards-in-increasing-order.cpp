class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
       
        queue<int>gg;
        vector<int>x;
        for(auto i:deck)
            gg.push(i);
        
        while(gg.size()){
            
            x.push_back(gg.front());
            gg.pop();
            
            if(!gg.empty())
            {
               int y=gg.front();
                gg.pop();
                gg.push(y);
            }
        }
        vector<int>a=deck;
        sort(deck.begin(),deck.end());
        unordered_map<int,int>pp;
        for(int i=0;i<deck.size();i++)
        {
            pp[x[i]]=deck[i];
        }
        
        vector<int>y;
        for(auto i:a)
        {
          y.push_back(pp[i]);
        }
        
        return y;
        
        
        
    }
};