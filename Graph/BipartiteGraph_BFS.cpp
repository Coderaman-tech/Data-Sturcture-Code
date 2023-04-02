class Solution {
public:

 bool check(int src,int V,vector<int>adj[],vector<int>&vis){
    queue<int>q;
    q.push(src);
    vis[src]=0;
    
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(vis[it]==-1){
                vis[it]=!vis[node];
                q.push(it);
            }
            else if(vis[it]==vis[node]){
                return false;
            }
        }
    }
    return true;
 }

    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                adj[i].push_back(it);
            }
        }
         for(int i=0;i<n;i++){
	        if(vis[i]==-1){
	            if(check(i,n,adj,vis)==false)
	            return false;
	        }
	    }
	    return true;
    }
};
