class Solution {
public:
    string replaceWords(vector<string>& dictionary, string str) {
        
        sort(dictionary.begin(),dictionary.end());
        string ans="" ;
        stringstream s(str); 
        string word;
        while(s >> word)
        {  string g=word;
           for(int i=0;i<dictionary.size();i++)
           {   int j=0;
               bool b=0;
               for(;j<word.size();j++)
               {
               if(j==dictionary[i].size()||(j==word.size()-1&&word[j]==dictionary[i][j]))
               {
               if(j==dictionary[i].size())
               g=dictionary[i];
               else
               g=word;
               b=1;
               break;
               }
               if(word[j]!=dictionary[i][j])break;
               }
               if(b==1)break;
           }
       
             ans+=g+" ";
        }
        ans.pop_back();
        return ans;
    }
};