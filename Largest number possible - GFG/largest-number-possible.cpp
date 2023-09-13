//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        // code here
        // vector<int>vec;
        // for(int i=0; i<9; i++){
        //     vec.push_back(i);
        // }
        // sort(vec.begin(), vec.end(), greater<int>());
        // string res="";
        // for(int i=0; i<vec.size(); i++){
        //     if(vec[i]>S){
        //         continue;
        //     }
        //     else{
        //         S-=vec[i];
                
        //     }
        // }
        if(s>(9*n) ){
            return "-1";
        }
        if(s==0 && n>1){
            return "-1";
        }
        string v;
        int d,r;
        d=s/9;
        r=s%9;
        while(v.size()!=d){
            v.push_back('9');
        }
        if(v.size()<n){
            v.push_back(r+48);
        }
        while(v.size()!=n){
            v.push_back('0');
        }
        
       return v; 


    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends