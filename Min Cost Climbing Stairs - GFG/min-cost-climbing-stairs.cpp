//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  private: 
    int solve(vector<int>& cost,int n, vector<int>& dp){
        //base case
        if(n==0) return cost[0];
        
        if(n==1) return cost[1];
        
        if(dp[n]!=-1) return dp[n];
        
        dp[n]= cost[n] + min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
        
    }
    int solve3(vector<int>& cost,int n){
        vector<int>dp(n+1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        //if(dp[n]!=-1) return dp[n];
        
        for(int i=2; i<n; i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
  public:
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        //Write your code here
        int cnt=0;
        //vector<int>dp(N+1,-1);
        // int ans= min( solve(cost,N-1,dp), solve(cost,N-2,dp));
        // return ans;
        return solve3(cost,N);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends