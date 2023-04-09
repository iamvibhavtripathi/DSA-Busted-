//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        //1491113
        //2491213
        // long long pre[n+1],post[n+1];
        // pre[0]=a[0];
        // for(int i=1; i<n; i++){
        //     pre[i]=pre[i-1]+a[i];
        // }
        // post[0]=a[n-1];
        // for(int i=n-2,j=1; i>=0; i--){
        //     post[j]=post[j-1]+a[i];
        //     j++;
        // }
        // // for(int i=0; i<n; i++) cout<<pre[i]<<" ";
        // // for(int i=0; i<n; i++) cout<<post[i]<<" ";
        // for(int i=0, j=0; i<=n; i++){
        //     if(pre[i]==post[j]){
        //         return i+2;
        //     }
        // }
        
        int lsum=0,rsum=0;
        for(int i=0; i<n; i++){
            rsum+=a[i];
        }
        for(int i=0; i<n; i++){
            rsum-=a[i];
            if(lsum==rsum){
                return i+1;
            }
            lsum+=a[i];
        }
        return -1;
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