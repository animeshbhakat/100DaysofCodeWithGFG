#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int dp[1001][1001]; 
    int helper(string &s, string &t, int n, int m){
        if(n==0 && m==0){
            return 0;
        }
        if(n==0){
            return m;
        }
        if(m==0){
            return n;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(s[n-1]==t[m-1]){
            return dp[n][m]=helper(s,t,n-1,m-1);
        }
        return dp[n][m]=1+min(helper(s,t,n-1,m),min(helper(s,t,n-1,m-1),helper(s,t,n,m-1)));
    }
    int editDistance(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n==0){
            return m;
        }
        memset(dp,-1,sizeof(dp));
        return helper(s,t,n,m);
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends