//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(vector<int>&arr, int n) {
// 	  int osum = 0 , esum = 0 ;
	  vector< int > dp( n+1 , 0  ) ;
	  dp[1] = arr[0] ;
	  
	  for( int i = 1 ; i<=n ; i++ ){
	        
	         dp[i] = max( dp[i-2] + arr[i-1] , dp[i-1] ) ;
	       
	  }
	  return dp[n]  ;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends