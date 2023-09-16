//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long
const int mod= 1000000007;
class Solution
{
    public:
    
    long long solve(int n, vector<int>& dp){
        //base case
        if(n==0)
        return 1;
        
        if(n<0)
        return 0;
        
        if(dp[n]!=-1) return dp[n];
        
        //recursive calls
        //small calculation
        
        ll a=solve(n-1,dp);
        ll b=solve(n-2,dp);
        ll c=solve(n-3,dp);
        
        return dp[n]=(((a+b)%mod)+c)%mod;
        
        
    }
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        vector<int>dp(n+1,-1);
        long long xnt=0;
        return solve(n,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends