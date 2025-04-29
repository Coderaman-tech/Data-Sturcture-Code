#include <bits/stdc++.h> 

bool isSubset(int ind,int k,vector<vector<int>>&dp,vector<int> &arr){
    if(k==0) return true;
    if(ind==0) return (arr[0]==k);

    if(dp[ind][k]!=-1) return dp[ind][k];
    bool notTake=isSubset(ind-1,k,dp,arr);
    bool take=false;
    if(arr[ind]<=k)
    take=isSubset(ind-1,k-arr[ind],dp,arr);

    return dp[ind][k]=take|notTake; 
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    return isSubset(n-1,k,dp,arr);
}
