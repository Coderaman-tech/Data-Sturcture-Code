class Solution {
private:
     void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>grid){
      vis[row][col]=1;
      queue<pair<int,int>>q;
      q.push({row,col});
      int n=grid.size();
      int m=grid[0].size();
      
      while(!q.empty()){
          
          int row=q.front().first;
          int col=q.front().second;
          q.pop();
          for(int neirow=-1;neirow<=1;neirow++){
              for(int neicol=-1;neicol<=1;neicol++){
                  int nrow=row+neirow;
                  int ncol=col+neicol;
                  if(neirow==0 || neicol==0){
                      if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol] ){
                      vis[nrow][ncol]=1;
                      q.push({nrow,ncol});
                  }
                      
                  }
                  
              }
          }
      }
  }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    count++;
                    bfs(row,col,vis,grid);
                    
                }
            }
        }
        return count; 
    }
};
