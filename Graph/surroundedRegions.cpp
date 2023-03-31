class Solution {
public:


   void dfs(int row,int col,int n,int m,int delrow[],int delcol[],vector<vector<int>>&vis, vector<vector<char>> mat){
       vis[row][col]=1;
       for(int i=0;i<4;i++){
           int nrow=row+delrow[i];
           int ncol=col+delcol[i];
           if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]=='O'){
               dfs(nrow,ncol,n,m,delrow,delcol,vis,mat);
           }
       }
   }

    void solve(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
          vector<vector<int>>vis(n,vector<int>(m,0));
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        
        
        for(int j=0;j<m;j++){
            if(mat[0][j]=='O' && !vis[0][j]){
                dfs(0,j,n,m,delrow,delcol,vis,mat);
            }
             if(mat[n-1][j]=='O' && !vis[n-1][j]){
                dfs(n-1,j,n,m,delrow,delcol,vis,mat);
            }
        }
        for(int j=0;j<n;j++){
            if(mat[j][0]=='O' && !vis[j][0]){
                dfs(j,0,n,m,delrow,delcol,vis,mat);
            }
             if(mat[j][m-1]=='O' && !vis[j][m-1]){
                dfs(j,m-1,n,m,delrow,delcol,vis,mat);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]){
                    mat[i][j]='X';
                }
                else
                mat[i][j]='O';
            }
        }

    }
};
