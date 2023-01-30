//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int> st;
    // for(int i=0; i<s.size(); i++){
    //     st[s[i]]++;
    // }
    if(k>s.size()) return -1;
    int maxi=-1, ans=0;
    int i=0, j=0, n=s.size();
    while(j<n){
        //calculations
        st[s[j]]++;
        // creating window
        if(st.size() <k){
            j++;
        }
        
        // updating window
        else if(st.size()==k){
            maxi=max(maxi,j-i+1);
            j++;
        }
        else if(st.size()>k){

            while(st.size()>k){
            st[s[i]]--;
            if(st[s[i]]==0){
                st.erase(s[i]);
            }
            i++;
            if(i>j) return -1;
            }
            j++;
        }
        else{ return -1;
    }
    }
    return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends