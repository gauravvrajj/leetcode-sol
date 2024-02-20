class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int end=s1.size();
        int i=0;
        sort(s1.begin(),s1.end());
        while(i+end<=s2.size())
        {
            string s=s2.substr(i,end);
            sort(s.begin(),s.end());
            if(s==s1)
                return 1;
            i++;
        }
        return 0;
    }
};