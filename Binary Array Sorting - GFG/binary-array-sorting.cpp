//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int n)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int cnt=0; 
        for(int i=0; i<n; i++){
            if(A[i]==1){
                cnt++;
            }
        }
        
        int i=0; 
        while(i<n-cnt){
            A[i]=0;
            i++;
        }
        while(i<n){
            A[i]=1;
            i++;
        }
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends