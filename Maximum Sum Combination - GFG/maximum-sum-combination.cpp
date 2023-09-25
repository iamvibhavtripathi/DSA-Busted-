//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>res;
        priority_queue<int>p;
        for(int i = n-1;i>=n-k;i--){
            for(int j = n-1;j>=n-k;j--){
                if(p.size()<k) p.push(-(a[i]+b[j]));
                else{
                    if((a[i]+b[j])>-p.top()){
                        p.pop();
                        p.push(-(a[i]+b[j]));
                    }
                    else break;
                }
            }
        }
        while(!p.empty()){
            res.push_back(-p.top());
            p.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends