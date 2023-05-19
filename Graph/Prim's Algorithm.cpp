
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        vector<int>vis(V,0);
        pq.push({0,0});
        int sum=0;
        
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int wt=it.first;
            int node=it.second;
            
            if(vis[node]==1) continue;
            vis[node]=1;
            sum+=wt;
            
            for(auto it:adj[node]){
                int adjwt=it[1];
                int adjnode=it[0];
                
                if(!vis[adjnode]){
                    pq.push({adjwt,adjnode});
                }
            }
        }
        return sum;
    }
};

