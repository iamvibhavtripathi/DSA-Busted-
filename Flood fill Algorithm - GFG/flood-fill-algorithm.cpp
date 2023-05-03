//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        vector<vector<int>> ans=image;
        int n=image.size(), m=image[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int color=image[sr][sc];
        queue<pair<int,int>>q;
        q.push({sr,sc});
        ans[sr][sc]=newColor;
        vis[sr][sc]=1;
        while(!q.empty()){
            auto top=q.front();
            int src_x=top.first;
            int src_y=top.second;
            q.pop();
            int dr[]={-1,0,1,0};
            int dc[]={0,1,0,-1};
            for(int ind=0; ind<4; ind++){
                int new_x=src_x+dr[ind];
                int new_y=src_y+dc[ind];
                if(new_x>=0 && new_x<n && new_y>=0 && new_y<m && !vis[new_x][new_y] && ans[new_x][new_y]==color){
                    vis[new_x][new_y]=1;
                    q.push({new_x,new_y});
                    ans[new_x][new_y]=newColor;
                }
            }
        }
      return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends