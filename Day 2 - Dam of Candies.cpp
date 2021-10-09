//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{
    
    public:
    int maxCandy(int height[], int n){
    int maxArea =0;
    int l=0, h=n-1;
    while(l<h){
      int CurrentArea = (h-l-1)* min(height[l], height[h]);
      if(CurrentArea > maxArea)
        maxArea = CurrentArea;
      if(height[l] < height[h])
        l++;
      else
        h--;
    }
    return maxArea;
    }   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends