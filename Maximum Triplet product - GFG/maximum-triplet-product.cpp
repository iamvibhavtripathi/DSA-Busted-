//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    // 	for(int i=0;i<n; i++){
    // 	    if(arr[i]<0)arr[i]*=-1;
    	    
    // 	}
    	sort(arr,arr+n);
    // 	sort(arr,arr+n);
    // 	int elem1=arr[n-1],elem2=0,elem3=0;
    // 	if(abs(arr[0])>arr[n-1]) elem1=arr[0];
    // 	if(elem1<0){
    	    
    // 	}
    	return max(arr[n-1]*arr[n-2]*arr[n-3],arr[0]*arr[1]*arr[n-1]);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends