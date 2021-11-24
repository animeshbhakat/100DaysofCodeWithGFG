//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int candies(int m, int n) 
    { 
    	vector<bool> vec(m*n +1, false);
    	
    	vec[0] = true;
    	int answer = 0;
    	for(int i=0; i<=m*n; i++){
    	    if(i>=m)vec[i] = vec[i] | vec[i-m];
    	    if(i>=n)vec[i] = vec[i] | vec[i-n];
    	    if(!vec[i])answer++;
    	}
    	return answer;
    } 
};

// { Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		Solution obj;
		cout << obj.candies(m,n)<<endl; 
	}
	return 0; 
} 



  // } Driver Code Ends