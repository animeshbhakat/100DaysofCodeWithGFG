//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        string s=A;
       if(A.find(B)!=string::npos) return 1;
       
       int count=B.size()/A.size()+2;
       
       for(int i=2;i<=count;i++){
           s+=A;
           if(s.find(B)!=string::npos)
           return i;
       }
       return -1;
    }
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends