int mod =1e9+7;
int countSubsets(int ind,int k,vector<vector<int>>&dp,vector<int>& arr){
	if(ind==0){
		if(k==0 && arr[0]==0) return 2;
		if(k==arr[ind] || k==0) return 1;
		else return 0;
	}
	if(dp[ind][k]!=-1) return dp[ind][k];
	int notPick=countSubsets(ind-1,k,dp,arr);
	int pick=0;
	if(arr[ind]<=k) pick=countSubsets(ind-1,k-arr[ind],dp,arr);
	return dp[ind][k]=(pick+notPick)%mod;
}

int findWays(vector<int>& arr, int k)
{
	// Write your code here.
	int n=arr.size();
	vector<vector<int>>dp(n,vector<int>(k+1,-1));
	return countSubsets(n-1,k,dp,arr);
}
