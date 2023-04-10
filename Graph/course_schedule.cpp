
class Solution
{
  public:
    vector<int> findOrder(int N, int m, vector<vector<int>> pre) 
    {
        //code here
         vector<int>adj[N];
	  
	   for(int i=0;i<m;i++)
	   adj[pre[i][1]].push_back(pre[i][0]);
	    queue<int>q;
	    
	    vector<int>indegree(N,0);
	    
	    for(int i=0;i<N;i++){
	       //indegree[pre[i].second]++;
	       for(auto it:adj[i])
	       indegree[it]++;
	    }
	    
	    for(int i=0;i<N;i++){
	        if(indegree[i]==0)
	        q.push(i);
	    }
	    vector<int>ans;
	    int cnt=0;
	    while(!q.empty()){
	        int node=q.front();
	       // cout<<node<<" ";
	        q.pop();
	        cnt++;
	        ans.push_back(node);
	        for(auto it:adj[node]){
	            indegree[it]--;
	            if(indegree[it]==0)
	            q.push(it);
	        }
	        
	    }
	    if(cnt==N)
	  return ans;
	  ans.clear();
	  return ans;
    }
};

