class Solution {
public:
     void dfs(int i,vector<int>adjsls[],vector<int>&vis){
      vis[i]=1;
      for(auto it:adjsls[i]){
          if(!vis[it]){
              dfs(it,adjsls,vis);
          }
      }
  }
    int findCircleNum(vector<vector<int>>& adj) {
        int V=adj.size();
          vector<int>adjls[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 &&  i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int count=0;
      vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                count++;
                dfs(i,adjls,vis);
            }
        }
        return count;
    }
};
