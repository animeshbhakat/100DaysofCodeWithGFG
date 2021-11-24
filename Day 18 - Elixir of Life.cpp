#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int maxFrequency(string s)
    {
    	string lps;
    	int n=s.length();
    	for(int i=1; i<n; i++)
    {
    if(s.substr(0,i)== s.substr(n-i,i)){
        
        lps=s.substr(0,i);
        break;
    }
    }    	
    
        int ans=0;
        int n1=lps.length();
        if(n1==0) return 1;
        
        for(int i=0;i< n;i++){
           
           if(lps==s.substr(i,n1)){
               ans++;
           }
               
           
           
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
   		Solution obj;
   		cout << obj.maxFrequency(str) << "\n";
   	}
    return 0;
}  // } Driver Code Ends