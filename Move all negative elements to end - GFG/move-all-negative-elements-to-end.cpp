//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int ans[],int n)
    {
        // Your code goes here
        vector<int>help,arr(n);
        
        int cnt=0,j=0;
        for(int i=0; i<n; i++){
            if(ans[i]>=0){
                arr[j++]=ans[i];
            }
            else{
                cnt++;
                help.push_back(ans[i]);
                //arr.erase(arr.begin()+i);
            }
        }
        //int k=n-cnt;
        for(int i=0;i<help.size() ; i++){
            arr[j++]=(help[i]);
        }
        
        for(int i=0; i<n; i++){
            ans[i]=arr[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends