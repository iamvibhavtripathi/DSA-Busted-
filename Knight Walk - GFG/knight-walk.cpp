//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int minStepToReachTarget(vector<int>&src, vector<int>&dest, int n){
	    // Code here	   int steps=0;
	   int stepscount=1e9;
	   int steps=0;
	   queue<pair<int,int>>q;
	   q.push({src[0]-1,src[1]-1});
	   vector<vector<int>>vis(n,vector<int>(n,0));
	   if(src==dest) return 0;
	   vis[src[0]-1][src[1]-1]=1;
	   while(!q.empty()){
	       int size=q.size();
    	       while(size--){
    	       auto top=q.front();
    	       q.pop();
    	       int row=top.first;
    	       int col=top.second;
    	       // stepscount=min(stepscount,top.first);
    	        if(row==(dest[0]-1) && col==(dest[1]-1)){
                            return steps;
    	       }
    
    	       int dr[]={2,1,-1,2,-2,1,-2,-1};
    	       int dc[]={1,2,2,-1,1,-2,-1,-2};
    	       for(int ind=0; ind<8; ind++){
    	           int nrow=row+dr[ind];
    	           int ncol=col+dc[ind];
    	           if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && !vis[nrow][ncol] ){
    	                   q.push({nrow,ncol});
    	                   //stepscount++;
    	                vis[nrow][ncol]=1;
    	                
    	           }
    	       }
    	   }
	   steps++;
	   }
	    return -1;

	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends