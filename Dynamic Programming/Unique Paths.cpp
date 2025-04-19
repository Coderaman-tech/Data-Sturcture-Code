class Solution {
public:
    int possPath(int i,int j,vector<vector<int>>&dp){
        if(i<0 || j<0) return 0;
        if(i==0 && j==0) return 1;

        if(dp[i][j]!=-1) return dp[i][j];

        int up=possPath(i,j-1,dp);
        int left=possPath(i-1,j,dp);
        return dp[i][j]=left+up;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return possPath(m-1,n-1,dp);
    }
};
