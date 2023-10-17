//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
void dfs(vector<int>adj[],vector<vector<int>> &g,int i,int x){
   
    g[i][x]=1;
     for(auto t:adj[x]){
             if(g[i][t]==0){
             dfs(adj,g,i,t);
         }
     }
     return;
}
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        vector<vector<int>> g(N,vector<int>(N,0));
        vector<int>adj[N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(graph[i][j]==1 and i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        for(int i=0;i<N;i++){
         for(auto x:adj[i]){
             if(g[i][x]==0){
             dfs(adj,g,i,x);
         }
         }
        }
         for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j){
                    g[i][j]=1;
                }
            }}
        return g;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends