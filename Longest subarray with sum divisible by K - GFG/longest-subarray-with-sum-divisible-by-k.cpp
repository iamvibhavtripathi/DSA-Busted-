//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    if(n==0) return 0;
     int sum  = 0;
     int rem = 0;
     int ans = 0;
     unordered_map<int, int> mp;
     mp.insert({0,-1});
     
     for( int i = 0; i< n;i++)
     {
         sum= sum +arr[i];
         
         rem = sum%k;
         if(rem <0)
         {
             rem = rem+k;
         }
         
         if( mp.find(rem)!= mp.end())
         {
             
             
             int len = i - mp[rem];
             
             ans = max(ans, len);
         }
         else
         {
             mp.insert({rem,i});
             
         }
     }
    return ans;

	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends