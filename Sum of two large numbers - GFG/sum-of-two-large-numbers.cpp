//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        // long long x=stoll(X);
        // long long y=stoll(Y);
        // long long res= x+y;
        // string ans;
        // ans=to_string(res);
        // return ans;\
        string findSum(string X, string Y) {
        int i = X.size()-1,j = Y.size()-1;
        int sum =0, carry = 0;
        string s = "";
        
        // for string X and Y 
        while(i>=0 && j>=0){
            sum = X[i]-'0' + Y[j]-'0';
            sum += carry;
            carry = sum / 10;
            sum = sum % 10;
            s += to_string(sum);
            i--,j--;
        }
        
        //  for string X if Y is sorter
        while(i>=0){
            sum = X[i] - '0';
            sum += carry;
            carry = sum / 10;
            sum = sum % 10;
            s += to_string(sum);
            i--;
        }
        
        //  for string y if X is sorter
        while(j>=0){
            sum = Y[j] - '0';
            sum += carry;
            carry = sum / 10;
            sum = sum % 10;
            s += to_string(sum);
            j--;
        }
        
        // in case carry is not added
        if(carry != 0){
            s += to_string(carry);
        }
        
        int k = s.size()-1;
    
        // ending zero delete
        while(k>=1 && s[k]=='0' ){
            s.pop_back();
            k--;
        }
        
        reverse(s.begin(),s.end());
    
        return s;

    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends