class Solution {
public:
 bool dfs( int node,vector<int>&vis, vector<int>&pathvis, vector<int>&check,vector<int> adj[]){
       
     vis[node]=1;
     pathvis[node]=1;
     for(auto it:adj[node]){
         if(!vis[it]){
            if(dfs(it,vis,pathvis,check,adj)==true){
                return true;
            }
         }
         else if(pathvis[it])
         return true;
     }
     check[node]=1;
     pathvis[node]=0;
     return false;
   }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                adj[i].push_back(it);
            }
        }
        int V=n;
         vector<int>vis(V,0);
        vector<int>pathvis(V,0);
        vector<int>check(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,pathvis,check,adj);
            }
        }
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(check[i])
            ans.push_back(i);
        }
        return ans;
    }
};
