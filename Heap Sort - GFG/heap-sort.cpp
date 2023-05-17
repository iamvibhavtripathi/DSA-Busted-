//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    priority_queue<int>pq;
    vector<int>ans;
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
    //   arr.clear();
      while(!pq.empty()){
          ans.push_back(pq.top());
          pq.pop();
      }
      
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr,n);
        heapify(arr,n,0);
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        for(int i=0; i<n; i++){
            arr[i]=ans[i];
        }
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends