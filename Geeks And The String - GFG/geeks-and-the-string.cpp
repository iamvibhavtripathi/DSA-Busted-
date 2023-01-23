//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        string ans="";
        int n=s.size();
        stack<char> st;
        //st.push(s[0]);
        for(int i=0; i<n; i++){
            // if(st.top() == s[i]){
            //     st.pop();
            // }
            // else if(st.empty() && i!=n-1){
            //     st.push(s[i]);
            // }
            if(st.empty()) {
                st.push(s[i]);
            }
            else if(st.top()!=s[i]) st.push(s[i]);
            else st.pop();
        }
        if(st.size()==0) return "-1";
        
        while(!st.empty()){
            auto top= st.top();
            st.pop();
            ans+=top;
        }
     reverse(ans.begin(),ans.end());
     return ans;    
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends