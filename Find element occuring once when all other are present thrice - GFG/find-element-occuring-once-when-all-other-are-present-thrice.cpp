//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  public:
    int singleElement(int arr[] ,int N) {
        vector<int> ans(33);
        for(int i = 0;i<N;i++)
        {
            int k = 0, it=arr[i]+1e9;
            while(it)
            {
                if(it&1)
                    ans[k]++;
                it>>=1;
                ans[k]%=3;
                k++;
            }
        }
        int temp = 0;
        for(int i=0;i<33;i++)
            if(ans[i]==1)
                temp+=(1<<i);
        return temp-1e9;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends