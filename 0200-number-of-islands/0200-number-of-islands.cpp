class Solution {
public:
void solve(int i,int j,vector<vector<char>>&grid){
        if(i<0 || i>grid.size()-1 || j<0 || j>grid[0].size()-1 || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        solve(i+1,j,grid);
        solve(i-1,j,grid);
        solve(i,j+1,grid);
        solve(i,j-1,grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    c++;
                    solve(i,j,grid);
                }
            }
        }
        return c;
    }
};