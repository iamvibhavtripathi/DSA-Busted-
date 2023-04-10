//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long s=0;
        if(date%2==0){
            for(int i=0 , j=0; i<n; i++){
                if(car[i]%2==1){
                    s+=fine[i];
                }
                else{
                    continue;
                }
            }
            
        }
        else{
            for(int i=0,j=0; i<n; i++){
                if(car[i]%2==0){
                    s+=fine[i];
                }
                else continue;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, date;
        cin >> n >> date;
        int car[n], fine[n];
        
        for (i = 0; i < n; i++){
            cin >> car[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> fine[i];
        }
        Solution obj;
        cout << obj.totalFine(n, date, car, fine) << endl;
    }
    return 0;
}

// } Driver Code Ends