class Solution {
public:

    int maxSum(int i,int j1,int j2,int n,int m,vector<vector<vector<int>>>&dp,vector<vector<int>>& grid){
        if(j1<0 || j1>=m || j2<0 || j2>=m){
            return -1e8;
        }
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        if(i==n-1){
            if(j1==j2) return grid[i][j1];
            return grid[i][j1]+grid[i][j2];
        }
        int maxi=INT_MIN;
        for(int dj1=-1;dj1<=1;dj1++){
            for(int dj2=-1;dj2<=1;dj2++){
                int ans;
                if(j1==j2) ans=grid[i][j1];
                else ans=grid[i][j1]+grid[i][j2];
                ans+=maxSum(i+1,j1+dj1,j2+dj2,n,m,dp,grid);
                maxi=max(maxi,ans);
            }
        }
        return dp[i][j1][j2]=maxi;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return maxSum(0,0,m-1,n,m,dp,grid);
    }
};
