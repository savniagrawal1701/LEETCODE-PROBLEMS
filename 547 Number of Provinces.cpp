class Solution {
public:
    void dfs(int v, vector<int> adj[], vector<int>& visited) { 
        visited[v] = 1; 
        for (int u : adj[v]) { 
            if (!visited[u]) { 
                dfs(u, adj, visited); 
            } 
        } 
    } 

    int findCircleNum(vector<vector<int>>& isConnected) {
        int V= isConnected.size();
        vector<int> adjlist[V];
        for(int i =0;i<V;i++){
            for(int j =0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
            
        }
           vector<int> visited(V, 0); 
        
        int count = 0;

        
        for (int i = 0; i < V; i++) {
            
            if (!visited[i]) {
                
                count++;
                dfs(i, adjlist, visited);
            }
        }

        
        return count;
    }
};
