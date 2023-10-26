//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int solve(int n){
        //base case
        int steps=0;
        
        while(n){
            if(n%2) n-=1;
            else{
                n=n/2;
            }
            steps++;
        }
        return steps;
    }
    int minOperation(int n)
    {
        //code here.
        return solve(n);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends