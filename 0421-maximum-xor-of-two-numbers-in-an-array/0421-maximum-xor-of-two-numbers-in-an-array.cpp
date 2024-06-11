struct node{
    node* child[2];
    
    bool contain(int bit){
        return child[bit]!=NULL;
    }
    node* get(int bit){
        return child[bit];
    }
    void put(int bit,node* nodee){
        child[bit]=nodee;
    }
    
};

class Trie {
    public:
    node* root;
    Trie(){
        root=new node();
    }
    void insert(int num)
    {
        node* node=root;
        for(int i=31;i>=0;i--)
        {
           int bit=(num>>i)&1;
            if(!node->contain(bit)){
                node->put(bit,new struct node());
            }
            node=node->get(bit);
        }
    }
    
    int getmax(int num)
    {
        node* node=root;
        int maxnum=0;
        for(int i=31;i>=0;i--)
        {
           int bit=(num>>i)&1;
            if(node->contain(1-bit)){
               maxnum= maxnum | (1<<i);
                node=node->get(1-bit);
            }
            else
            node=node->get(bit);
        }
        
        return maxnum;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        
        
        Trie trie;
        for(auto i:nums)trie.insert(i);
        int maxx=0;
        for(auto i:nums){
            maxx=max(maxx,trie.getmax(i));
        }
        
        return maxx;
    }
};