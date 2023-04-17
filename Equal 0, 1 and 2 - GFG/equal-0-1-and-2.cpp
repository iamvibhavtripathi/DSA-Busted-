//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        // code here
                long long count =0;
        map<pair<long long,long long>,long long>mp;
        long long ones =0;
        long long zeros =0;
        long long twos =0;
        mp[make_pair(0,0)]=1;
        
        for(int i=0; i<str.length();i++){
            if(str[i]=='1'){
                ones++;
            }
            if(str[i]=='2'){
                twos++;
            }
            if(str[i]=='0'){
                zeros++;
            }
            pair<int,int>p = make_pair(zeros-ones,zeros-twos);
            if(mp.find(p)!=mp.end()){
                count+=mp[p];
            }
            mp[p]++;
        }
        return count;
    }

};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	}
    return 0;
}

// } Driver Code Ends