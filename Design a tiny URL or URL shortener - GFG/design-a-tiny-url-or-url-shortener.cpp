//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	// Function to generate a short url from integer ID
	string idToShortURL(long long int n) {
	    // code here
	            unordered_map<int,char>ump;
         
        for(int i = 0 ; i<26;i++){
           ump[i] = 'a' + i;
        }
        
        for(int i = 26; i<52;i++){
           ump[i] = 'A' + i-26;
        }
        
        for(int i = 52; i<62;i++){
           ump[i] = '0' + i-52;
        }
        
        
       string res;
        while(n>61){
           
           res = ump[n%62] + res;
           n = n/62;
        }
        
        res = ump[n] + res;
        
        return res;


	}

};

//{ Driver Code Starts.

long long shortURLtoID(string);

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        auto url = ob.idToShortURL(n);
        auto id = shortURLtoID(url);
        cout << url << "\n" << id << "\n";
    }
    return 0;
}

// Function to get integer ID back from a short url
long long int shortURLtoID(string shortURL) {
    long long int id = 0; // initialize result

    // A simple base conversion logic
    for (int i = 0; i < shortURL.length(); i++) {
        if ('a' <= shortURL[i] && shortURL[i] <= 'z')
            id = id * 62 + shortURL[i] - 'a';
        if ('A' <= shortURL[i] && shortURL[i] <= 'Z')
            id = id * 62 + shortURL[i] - 'A' + 26;
        if ('0' <= shortURL[i] && shortURL[i] <= '9')
            id = id * 62 + shortURL[i] - '0' + 52;
    }
    return id;
}
// } Driver Code Ends