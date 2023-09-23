//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

#include<bits/stdc++.h>
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        // vector<long long> presum(n), ssum(n);
        // long long s=0;
        // for(long long i=0; i<n; i++){
        //     s+=a[i];
        //     presum.push_back(s);
        // }
        // s=0;
        // for(long long i=n-1; i>=0; i--){
        //     s+=a[i];
        //     ssum.push_back(s);
        // }
        // long long i=0;
        // while(i<n){
        //     cout<<presum[i];
        //     i++;
        // }
        // cout<<endl;
        // i=0;
        // while(i<n){
        //     cout<<ssum[i];
        //     i++;
        // }
        // int left=0,right=0;
        // while(left<n ){
        //     if(presum[left]==ssum[right]){
        //         return left+1;
        //     }
        //     else if(a[left]>a[right]){
        //         while(a[left]>a[right]){
        //             right++;
        //         }
        //     }
        //     else {
        //         while(a[right]>a[left]){
        //             left++;
        //         }
        //     }
        // }
        long long right = 0, left = 0;
        for(int i = 0; i < n; i++) right += a[i];
        for(int i = 0; i < n; i++)
        {
            right -= a[i];
            if(left == right) return i + 1;
            left += a[i];
        }
        return -1;
    

        // return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends