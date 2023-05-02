//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    private: 
      bool isValid(int mid, int k, vector<int>&swe){
          int cnt=0;
        //   int sum=accumulate(swe.begin(),swe.end(),0);
        int sum=0;
        for(int i=0; i<swe.size(); i++){
            sum+=swe[i];
            if(sum>=mid){
                cnt++;
                sum=0;
            }
            
        }
        if(cnt<k) return false;
        return true;
          
      }
    public:
    int maxSweetness(vector<int>& sweetness, int N, int K) {
    // Write your code here.
    int start=*min_element(sweetness.begin(),sweetness.end());
    // int end= accumulate(sweetness.begin(),sweetness.end(),0);
    int end=0;
    for(int i=0; i<sweetness.size(); i++) end+=sweetness[i];
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(mid,K+1,sweetness)==true){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return end;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends