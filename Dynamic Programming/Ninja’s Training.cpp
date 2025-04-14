int func(int last,int idx,vector<vector<int>> &points, vector<vector<int>>&dp){
    if(idx==0){
        int maxi=0;
        for(int i=0;i<3;i++){
            if(i!=last)
            maxi=max(maxi,points[0][i]);
        }
        return maxi;
    }
    if(dp[idx][last]!=-1) return dp[idx][last];
    int maxi=0;
        for(int i=0;i<3;i++){
            if(i!=last){
            int point=points[idx][i]+func(i,idx-1,points,dp);
            maxi=max(maxi,point);
            }
        }
        return dp[idx][last]=maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>>dp(n,vector<int>(4,-1));
    return func(3,n-1,points,dp);
}
