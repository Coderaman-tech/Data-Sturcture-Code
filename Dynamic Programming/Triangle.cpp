class Solution {
public:

    int minPath(int i,int j,int n,vector<vector<int>>&dp,vector<vector<int>>&triangle){

        if(i==n-1) return triangle[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int down=triangle[i][j]+minPath(i+1,j,n,dp,triangle);
        int diagonal=triangle[i][j]+minPath(i+1,j+1,n,dp,triangle);

        return dp[i][j]=min(down,diagonal);

    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return minPath(0,0,n,dp,triangle);
    }
};
