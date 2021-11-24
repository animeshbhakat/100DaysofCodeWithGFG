#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool solve(vector<int>adj[],int curr,int parent,vector<bool>&visit){
       visit[curr]=true;
       bool status=false;
       for(auto x:adj[curr]){
           if(!visit[x]){
               status|=solve(adj,x,curr,visit);
           }
           else if(visit[x] && x!=parent)return true;
       }
       return status;
   }
   
        bool isCycle(int V, vector<int>adj[])
        {
            vector<bool>visit(V,false);
            for(int i=0;i<V;i++){
                if(!visit[i] && solve(adj,i,-1,visit)){
                    return true;
                }
            }
            return false;
        }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends