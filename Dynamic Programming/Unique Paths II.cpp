class Solution {
public:
    int possPath(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& mat){
        if(i>=0 && j>=0 && mat[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        int up=possPath(i-1,j,dp,mat);
        int left=possPath(i,j-1,dp,mat);
        return dp[i][j]=up+left;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return possPath(m-1,n-1,dp,mat);
    }
};
