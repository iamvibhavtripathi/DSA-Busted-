//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>ans(n);
        stack<long long >st;
        ans[n-1]=-1;
        long long k=n-2;
        st.push(arr[n-1]);
        for(int i=n-2; i>=0; i--){
            if(st.empty()){
                st.push(arr[i]);
                ans[k--]=-1;
            }
            
            if(!st.empty() and arr[i]<st.top()){
                ans[k--]=st.top();
                st.push(arr[i]);
            }
            else if(!st.empty() and arr[i]>=st.top()){
                while(!st.empty()){
                    st.pop();
                    if(st.size()==0){
                        ans[k--]=-1;
                        st.push(arr[i]);
                        break;
                        
                    }
                 if(st.top()>arr[i]){
                     ans[k--]=st.top();
                     st.push(arr[i]);
                     break;
                 }
                    
                }
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
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends