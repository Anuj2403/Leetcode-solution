class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int dr[4]={1,-1,0,0};
        int dc[4]={0,0,1,-1};
        
        int ans=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int a=0;
                    grid[i][j]=0;
                    
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    
                    while(!q.empty()){
                        pair<int,int> p=q.front();
                        q.pop();
                        a++;
                        int r=p.first,c=p.second;
                        for(int k=0;k<4;k++){
                            int nr=r+dr[k];
                            int nc=c+dc[k];
                            
                            if(nr>=0 and nr<grid.size() and nc>=0 and nc<grid[0].size() and grid[nr][nc]==1){
                                q.push({nr,nc});
                                grid[nr][nc]=0;
                
                            }
                        }
                    }
                    ans=max(ans,a);
                }
            }
        }
        
        return ans;
    }
};