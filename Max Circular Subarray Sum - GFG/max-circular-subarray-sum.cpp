//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    private: 
     int solve(int help[],int n){
         //int n=help.size();
         int curSum=0,maxSum=help[0];
         for(int i=0; i<n; i++){
             curSum+=help[i];
             if(curSum>maxSum){
                 maxSum=curSum;
             }
             if(curSum<0){
                 curSum=0;
             }
         }
         return maxSum;
     }
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        // your code here
       // int n=2*num;
        int tot=0;
        int nonCir=solve(arr,num);
        //vector<int>help(n);
        for(int i=0; i<num; i++){
            //help[i]=arr[i];
            tot+=arr[i];
            arr[i]=-arr[i];
        }
        
        
        
        // circular sum= noncicr - negative
        
        int negSum= solve(arr,num);
        
        int ans= tot+negSum;
        // for(auto itr: help) cout<<itr;
        // int curSum=0,maxSum=help[0];
        //  for(int i=0; i<help.size(); i++){
        //      curSum+=help[i];
        //      if(curSum>maxSum){
        //          maxSum=curSum;
        //      }
        //      if(curSum<0){
        //          curSum=0;
        //      }
        //  }

        // return maxSum;
        return (ans==0)? nonCir: max(nonCir,ans);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends