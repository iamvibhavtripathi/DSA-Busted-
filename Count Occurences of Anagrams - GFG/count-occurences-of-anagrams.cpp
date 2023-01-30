//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string s) {
	    // code here
	   // int i=0,j=0;
	   // int n= txt.size();
	   // unordered_map<char,int> mp;
	   // int k= pat.size();
	   // for(int m=0; m<k; m++){
	   //     mp[pat[m]]++;
	   // }
	   // int ans=0;
	   // int count= mp.size();
	   // while(j<n){
	   //     //calculations
	   //     if(mp.find(txt[j])!=mp.end()){
	   //         mp[txt[j]]--;
	   //     }
	   //     if(mp[txt[j]]==0){
	   //         count--;
	   //     }
    //         //creating window
    //         if(j-i+1 < k){
    //             j++;
    //         }
	   //     //size check 
	   //     else if(j-i+1 == k){
	   //         if(count == 0){
	   //             ans++;
	   //         }
	   //         if(mp.find(txt[i])!=mp.end()){
	   //                 mp[txt[i]]++;
	   //                  if(mp[txt[i]]==1){

	   //                 count++;
	   //                  }
	   //             }
	   //             i++;j++;
	            
	   //     }
	        
	   // }
	   // return ans;
	           unordered_map<char,int>mp;
        vector<int>ans;
        int k= p.size(), i=0, j=0, n=s.size();
        //storing elements in a map
        for(int it=0; it<k ; it++){
            mp[p[it]]++;
        }
        int count=mp.size();
        //sliding window
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
              mp[s[j]]--;
                
            
            if(mp[s[j]]==0){
                count--;
            }
            }
            //starting window starts
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                //1. ans 2. moving the window
                if(count==0){
                    ans.push_back(i);
                    
                }
                //processing for leaving element
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                    count++;}
                }
            
            i++;j++;
        }
        }
        return ans.size();

	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends