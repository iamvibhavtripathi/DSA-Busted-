//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	     long power(long x, long y, long p) {
        long res = 1l;
        x = x % p;
        while (y > 0) {
            if (y % 2 == 1)
                res = (res * x) % p;
            y = y >> 1;
            x = (x * x) % p;
        }
        return res;
    }

     long modInverse(long n, long p) {
        return power(n, p - 2, p);
    }

	int compute_value(int n)
	{
	    // Code here
	    
	    int mod= 1000000007;
	    long long ans=1l;
	    long long compute= 1l;
	            for(int i=0;i<n;i++) {
            compute = (compute%mod * (long)(n-i)%mod) % mod;
            compute = (compute%mod * modInverse(i+1, mod)%mod) % mod;
            ans = (ans%mod + (compute%mod*compute%mod)%mod) % mod;
        }
        return (int)(ans%mod);

	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.compute_value(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends