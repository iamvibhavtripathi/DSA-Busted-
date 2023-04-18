//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string>st;
        int j=0;
        string ans="";
        for(int i=0; i<=S.size(); i++){
            if(S[i]=='.'|| i==S.size()){
                st.push(ans);
                ans="";
            }
            
            else{
                            ans+=S[i];

            }
        }
        string res="";
        while(!st.empty()){
            auto top=st.top();
            st.pop();
            res+=top;
            res+=".";
        }
        res.pop_back();
     return res;   
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends