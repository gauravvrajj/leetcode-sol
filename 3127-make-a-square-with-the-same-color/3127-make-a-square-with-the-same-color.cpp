class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        
//             int n = grid.size();
//     int m = grid[0].size();

//     // Check each 2x2 square in the grid
//     for(int i = 0; i < n - 1; i++) {
//         for(int j = 0; j < m - 1; j++) {
//             int countB = 0, countW = 0;

//             // Count the number of 'B' and 'W' in the 2x2 square
//             for(int x = i; x <= i + 1; x++) {
//                 for(int y = j; y <= j + 1; y++) {
//                     if(grid[x][y] == 'B') countB++;
//                     else countW++;
//                 }
//             }

//             // If there are at least 3 cells of the same color, return true
//             if(countB >= 3 || countW >= 3) return true;
//         }
//     }

    // If no 2x2 square with at least 3 cells of the same color is found, return false
    // return false;
        
           string e = "";
        string g=e+grid[0][0]+grid[0][1]+grid[1][0]+grid[1][1];
        string h=e+grid[0][1]+grid[0][2]+grid[1][1]+grid[1][2];
        string i=e+grid[1][0]+grid[1][1]+grid[2][0]+grid[2][1];
        string j=e+grid[1][1]+grid[1][2]+grid[2][1]+grid[2][2];
        int blak=0,w=0;
        for(auto k:g)
        {
            if(k=='W')
                w++;
            else blak++;
        }
        if(w==3||blak==3||w==4||blak==4)
            return true;
        
        blak=0,w=0;
        for(auto k:h)
        {
            if(k=='W')
                w++;
            else blak++;
        }
        // cout<<w<<blak;
        if(w==3||blak==3||w==4||blak==4)
            return true;
        
        blak=0,w=0;
        for(auto k:i)
        {
            if(k=='W')
                w++;
            else blak++;
        }
        if(w==3||blak==3||w==4||blak==4)
            return true;
        blak=0,w=0;
        for(auto k:j)
        {
            if(k=='W')
                w++;
            else blak++;
        }
        if(w==3||blak==3||w==4||blak==4)
            return true;
        
       return false; 
    }
};