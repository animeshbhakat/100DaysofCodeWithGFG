//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
            int minbits = log2(n);
            int totalbits =  minbits*pow(2,minbits);
            int setbits = totalbits/2;
            setbits += n- (pow(2,minbits)-1);
            int remaining = n - pow(2,minbits);
            setbits += countSetBits(remaining);
            return setbits;
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends