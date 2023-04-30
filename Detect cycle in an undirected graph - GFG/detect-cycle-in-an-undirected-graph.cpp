//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private: 
    bool detect(int node, vector<int> adj[], int vis[]){
        vis[node]=1;
        queue<pair<int,int>>q;
        q.push({node,-1});
        while(!q.empty()){
            int nod=q.front().first;
            int parent= q.front().second;
            q.pop();
            for(auto itr: adj[nod]){
                if(!vis[itr]){
                    vis[itr]=1;
                    q.push({itr,nod});
                    
                }
                else if(parent!=itr){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool dfs(int node,int parent, vector<int>adj[], int vis[]){
        vis[node]=1;
        for(auto itr: adj[node]){
            if(!vis[itr]){
                if(dfs(itr, node, adj, vis)){
                    return true;
                }
            }
                else if(itr!=parent) return true;
            
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(dfs(i,-1,adj,vis))
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends