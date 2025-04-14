#include <bits/stdc++.h>

int find_min(int n, vector<int> &heights,vector<int> &dp) {
  if (n == 0){
      dp[0]=0;
    return dp[0];}
    if(dp[n]!=-1) return dp[n];
  int left = find_min(n - 1, heights,dp) + abs(heights[n] - heights[n - 1]);
  int right=INT_MAX;
  if (n > 1)
   right = find_min(n - 2, heights,dp) + abs(heights[n] - heights[n - 2]);
  dp[n]= min(left, right);
  return dp[n];
}

int frogJump(int n, vector<int> &heights)
{ 
    // Write your code here.
      vector<int>dp(n,-1);
    
    int ans= find_min(n-1,heights,dp);
    
    return ans;
}


//Tabulation

#include <bits/stdc++.h>

int count(int i,vector<int>&dp,vector<int>&height){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int one=count(i-1,dp,height)+abs(height[i-1]-height[i]);
    int two=INT_MAX;
    if(i>1)
        two=count(i-2,dp,height)+abs(height[i-2]-height[i]);
    return dp[i]=min(one,two);
}

int frogJump(int n, vector<int> &height)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
   return count(n-1,dp,height);
   
    
}

//Space optimisation

#include <bits/stdc++.h>


int frogJump(int n, vector<int> &height)
{
    // Write your code here.
    vector<int>dp(n,-1);
   
   dp[0]=0;
   for(int i=1;i<n;i++){
       int one=dp[i-1]+abs(height[i]-height[i-1]);
       int two=INT_MAX;
       if(i>1)
       two=dp[i-2]+abs(height[i]-height[i-2]);
       dp[i]=min(one,two);
   }
   return dp[n-1];
    
}
