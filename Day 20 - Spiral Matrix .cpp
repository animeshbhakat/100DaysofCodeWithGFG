#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int i=0,j=0;
        while((n+m>2) && (k>2*(n+m-2))){
            k-=2*(n+m-2);
            i++;
            j++;
            n-=2;
            m-=2;
        }
        
        
        for(int l=0;l<m;l++) {
            if(k==1) return a[i][j];
            j++;
            k--;
        }
        j--;
        i++;
        for(int l=0;l<n-1;l++) {
            if(k==1) return a[i][j];
            i++;
            k--;
        }
        i--;
        j--;
        for(int l=0;l<m-1;l++) {
            if(k==1) return a[i][j];
            j--;
            k--;
        }
        j++;
        i--;
        for(int l=0;l<n-2;l++) {
            if(k==1) return a[i][j];
            i--;
            k--;
        }
        return 0;
        
    }

};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}  // } Driver Code Ends