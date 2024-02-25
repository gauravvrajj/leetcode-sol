class Solution {
public:
    unordered_set<int> UniquePrimeFactors(int n){
    unordered_set<int> factors;
        for(int i=2; i<= sqrt(n); i++){
            while(n%i == 0){
                factors.insert(i);
                n /= i;
            }
        }

        if(n > 1) factors.insert(n);

        return factors;
    }
    
    void dfs(vector<int>x[],int start,vector<bool>&visited)
    {
        visited[start]=1;
        for(auto i:x[start])
        if(!visited[i])
        dfs(x,i,visited);
    }
    
    bool canTraverseAllPairs(vector<int>& nums) {
        int n=nums.size();
        vector<int>x[n];
        unordered_map<int, int> lastIndex;

        for(int i=0; i<nums.size(); i++){
            unordered_set<int> primeFactors = UniquePrimeFactors(nums[i]);

            for(int factor: primeFactors){
                if(lastIndex.find(factor) != lastIndex.end()){
                    int j = lastIndex[factor];
                    x[i].push_back(j);
                    x[j].push_back(i);
                }

                lastIndex[factor] = i;
            }
        }
                 
        vector<bool>visited(n,0);
        
        dfs(x,0,visited);
        for(auto i:visited)
            if(!i)
            return 0;  
        return 1;
    }
};