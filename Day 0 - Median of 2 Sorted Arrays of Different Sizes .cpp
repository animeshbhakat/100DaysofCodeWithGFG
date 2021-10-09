//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        vector<int> vec;
        long int p, q;
        p = array1.size();
        q = array2.size();
        for(long int i=0; i<p; i++){
            vec.push_back(array1[i]);
        }
        for(long int i=0; i<q; i++){
            vec.push_back(array2[i]);
        }
        sort(vec.begin(), vec.end());
        long int x = vec.size();
        double medianSol;
        if(x % 2 ==0){
            medianSol = (double)(vec[(x/2)-1]+vec[(x/2)])/2;
        }
        else{
            medianSol = (double)vec[((x+1)/2)-1];
        }
        return medianSol;
        
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
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends