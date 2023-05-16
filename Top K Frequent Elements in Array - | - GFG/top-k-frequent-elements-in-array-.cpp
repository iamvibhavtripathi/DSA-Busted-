//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    #define ppi pair<int,int>
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        int n=nums.size();
        map<int,int>mp;
        for(int i=0; i<n; i++) mp[nums[i]]++;
        priority_queue<ppi,vector<ppi>,greater<ppi>>pq;
        for(auto itr: mp){
            pq.push({itr.second,itr.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        // sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends