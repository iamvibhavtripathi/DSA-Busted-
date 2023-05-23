//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class Solution{
    private: 
     class node{
         public: 
           int data;
           int row;
           int col;
           
           node(int d, int r, int c){
               this->data=d;
               this->row=r;
               this->col=c;
           }
     };
     
     class cmp{
         public:
          bool operator()(node*a, node*b){
              return a->data > b->data;
          }
     };
    public:
    pair<int,int> findSmallestRange(int nums[][N], int n, int k)
    {
          //code here
          int mini=INT_MAX;
          int maxi=INT_MIN;
          priority_queue<node*,vector<node*>,cmp>pq;
          
          for(int i=0; i<k; i++){
              int element=nums[i][0];
              mini=min(mini,element);
              maxi=max(maxi,element);
              pq.push(new node(element,i,0));
              
          }
          
          int start=mini;
          int end=maxi;
          
          while(!pq.empty()){
              node* temp=pq.top();
              pq.pop();
              
              mini=temp->data;
              
              if(maxi-mini < end-start){
                  start=mini;
                  end=maxi;
              }
              
              if(temp->col+1<n){
                  maxi=max(maxi,nums[temp->row][temp->col+1]);
                 // mini=min(mini,nums[temp->row][temp->col+1]);
                  pq.push(new node(nums[temp->row][temp->col+1],temp->row,temp->col+1));
              }
              else{
                  break;
              }
          }
        return {start,end};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends