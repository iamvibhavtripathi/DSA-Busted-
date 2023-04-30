//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private: 
    bool dfs(int node, vector<int>adj[], int vis[], int pathvis[]){
        vis[node]=1;
        pathvis[node]=1;
        //traverse for adjacent nodes
        for(auto it: adj[node]){
            //when node has not been visited
            if(!vis[it])
{                if(dfs(it,adj,vis,pathvis)) return true;
}            //if node has been previously visited but it has to be visited again on the same path
            else if(pathvis[it]) return true;
        }
        pathvis[node]=0;
        return false;
        
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V]={0};
        int pathvis[V]={0};
        int indegree[V]={0};
        for(int i=0; i<V; i++){
            for(auto itr: adj[i]){
                indegree[itr]++;
            }
        }
        
        queue<int>q;
        for(int i=0; i<V; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        int cnt=0;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cnt++;
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
            //if()
        }
        // for(int i=0; i<V; i++){
        //     if(!vis[i])
        //         if(dfs(i,adj,vis,pathvis)){
        //             return true;
        //         }
        
        return (cnt==V)? false: true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends