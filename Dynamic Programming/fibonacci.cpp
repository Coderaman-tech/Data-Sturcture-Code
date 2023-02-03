#include <bits/stdc++.h>
using namespace std;


int f(int n,vector<int>&dp){
    if(n<=1)
    return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}


int main()
{
 
 int n;
 cin>>n;
 vector<int>dp(n+1,-1);
 cout<<f(n,dp)<<"\n";
    return 0;
}

TC- O(N)
SC-O(N)+O(N)



#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
 vector<int>dp(n+1);
dp[0]=0;
dp[1]=1;
for(int i=2;i<=n;i++)
dp[i]=dp[i-1]+dp[i-2];
cout<<dp[n]<<"\n";
    return 0;
}


TC- O(N)
SC-O(N)

#include <bits/stdc++.h>

using namespace std;

int main()
{
 
 int n;
 cin>>n;
 int prev2=0,prev=1;
 
 for(int i=2;i<=n;i++){
     int curi=prev+prev2;
     prev2=prev;
     prev=curi;
 }
  
  cout<<prev<<"\n";
    return 0;
}

TC- O(N)
SC-O(1)
