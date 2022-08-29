class Solution {
public:
    void mark_island(vector<vector<char>>& grid,int i,int j,int n,int m)
    {
       if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!='1')
           return ;
        grid[i][j]='2';
        mark_island(grid,i+1,j,n,m);
        mark_island(grid,i-1,j,n,m);
        mark_island(grid,i,j+1,n,m);
        mark_island(grid,i,j-1,n,m);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if(n==0) return 0;
        int m=grid[0].size();
        int island=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    mark_island(grid,i,j,n,m);
                    island++;
                }
            }
        }
        return island;
    }
};

