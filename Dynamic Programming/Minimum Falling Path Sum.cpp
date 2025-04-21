class Solution {
public:

    int minPath(int i,int j,int n,vector<vector<int>>&dp,vector<vector<int>>&matrix){
        if(j<0 || j>=n) return 1e9;
        if(i==0) return matrix[0][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int up=matrix[i][j]+minPath(i-1,j,n,dp,matrix);
        int ld=matrix[i][j]+minPath(i-1,j-1,n,dp,matrix);
        int rd=matrix[i][j]+minPath(i-1,j+1,n,dp,matrix);
        cout<<up<<" "<<ld<<" "<<rd<<"\n";
        return dp[i][j]=min(up,min(rd,ld));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            int mini=minPath(n-1,j,n,dp,matrix);
            ans=min(ans,mini);
        }
        return ans;
    }
};
