
class Solution {
  public:
  
    void topo_sort(vector<pair<int,int>>adj[],vector<int>vis,int node,stack<int>&st){
        
        vis[node]=1;
        for(auto it:adj[node]){
            int u=it.first;
            if(!vis[u]){
                topo_sort(adj,vis,u,st);
            }
        }
        st.push(node);
    }
    
  
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>>adj[N];
        
        for(int i=0;i<M;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,wt});
        }
        
        vector<int>dist(N,1e9);
        vector<int>vis(N,0);
        stack<int>st;
        
        for(int i=0;i<N;i++){
            if(!vis[i]){
                topo_sort(adj,vis,i,st);
            }
        }
        
        dist[0]=0;
        
        while(!st.empty()){
            int node=st.top();
            st.pop();
            for(auto it:adj[node]){
                int v=it.first;
                int wt=it.second;
                if(dist[node]+wt<dist[v]){
                    dist[v]=wt+dist[node];
                }
            }
            
        }
        for (int i = 0; i < N; i++) {
        if (dist[i] == 1e9) dist[i] = -1;
      }
      
        return dist;
    }
};

