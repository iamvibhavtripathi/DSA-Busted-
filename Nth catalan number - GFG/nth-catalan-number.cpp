//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        //code here
       int mod = pow(10,9)+7;
        vector<int> C(n+1,0);
        C[0]=1,C[1]=1;
        for(int i=2 ; i<=n ; i++)
        {
            long total = 0;
            for(int j=0 ; j<i ; j++)
            {
                total += ((long)C[j]*(long)C[i-j-1]) % mod;
                total %= mod;
            }
            C[i] = total;
        }
        return C[n];

    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends