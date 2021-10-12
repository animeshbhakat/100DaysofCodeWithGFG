#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool cmp(int a[],int b[])
   {
       for(int i=0;i<26;i++)
       if(a[i]!=b[i])
       return false;
       return true;
   }
    int search(string pat, string txt) {
        int hash[26]={0};
        int str[26]={0};
        int n=pat.size();
        int ans=0;
        for(int i=0;i<n;i++){
            
            ++hash[pat[i]-'a'];
            ++str[txt[i]-'a'];
            }
        for(int j=n;j<txt.size();j++)
        {
           if(cmp(str,hash))
           ++ans;
           str[txt[j]-'a']++;
           str[txt[j-n]-'a']--;
        }
        if(cmp(str,hash))
        ++ans;
        return ans;
    }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends