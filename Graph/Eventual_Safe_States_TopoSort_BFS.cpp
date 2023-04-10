
class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int>revadj[V];
         int indegree[V]={0};
         queue<int>q;
         vector<int>ans;
         
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
            revadj[it].push_back(i);
                indegree[i]++;
            }
        }
       
        for(int i=0;i<V;i++){
            if(indegree[i]==0)
           q.push(i);
        }
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:revadj[node]){
                indegree[it]--;
                if(indegree[it]==0)
                q.push(it);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

