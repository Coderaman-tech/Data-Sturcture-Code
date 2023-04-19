
class Solution
{
	public:
	
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(V,1e9);
        
        dist[S]=0;
        pq.push({0,S});
        while(!pq.empty()){
            int d=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            
            for(auto it:adj[node]){
                int adjDist=it[1];
                int adjNode=it[0];
                if(dist[node]+adjDist<dist[adjNode]){
                    dist[adjNode]=dist[node]+adjDist;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
    }
};

