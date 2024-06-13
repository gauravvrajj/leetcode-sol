class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        sort(students.begin(),students.end());
        sort(seats.begin(),seats.end());
        int ans=0;
        for(int i=0;i<seats.size();i++)
        {
            ans+=abs(seats[i]-students[i]);
        }
        return ans;
    }
};