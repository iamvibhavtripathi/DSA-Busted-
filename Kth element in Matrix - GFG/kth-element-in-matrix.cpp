//{ Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}

// } Driver Code Ends



int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
   // Answer Always lies btw min and max value of the array
   int mn = INT_MAX;
   int mx = INT_MIN;
   for(int i=0;i<n;i++){
       mn = min(mn,mat[i][0]);
       mx = max(mx,mat[i][n-1]);
   }
   int s = mn,e = mx;
   while(s<=e){
       // Assumed mid
       int mid = s+(e-s)/2;
       // finding all the which are lesser than the curr mid
       int cnt = 0;
       for(int i=0;i<n;i++)
       cnt+=upper_bound(mat[i],mat[i]+n,mid)-mat[i];
       
       // Now we Know that there will be exacty k-1 elements that one
       // are less than k
       if(cnt>k-1){
           // that implies that our answer is lesser so go inside the lesser part
           e = mid-1;
       }
       else if(cnt<k-1){
           // that implies that our answer is greater so go inside the greater part
           s = mid+1;
       }
       else{
           // we found the temparary of mid now we are founding the final ans
           int val = INT_MAX;
           for(int i=0;i<n;i++){
            int ind = upper_bound(mat[i],mat[i]+n,mid)-mat[i];
            if(ind<n)
            val = min(val,mat[i][ind]);
           }
           return val;
       }
   }
   return s;
  
}
