// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
      bool check(vector<vector<int>> & adj, vector<vector<int>> & adj2, int src){
          
          
          
          if(adj[src].size()!=adj2[src].size()){
             
              return false; 
          }
          int index= adj[src].size()-1;
          for(int i=0; i<adj[src].size();i++){
              
              if(adj[src][i]!=adj2[src][index-i]){
                  return false;
              }else{
                  
                 if(check(adj, adj2,adj[src][i] )==false){
                     return false;
                 }
                  
              }
          }
          return true;
      }
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        
        vector<vector<int>> adj(n+1);
         vector<vector<int>> adj2(n+1);
         
        for(int i=0; i<2*e;i+=2){
            adj[A[i]].push_back(A[i+1]);
        }
        
         for(int i=0; i<2*e;i+=2){
            adj2[B[i]].push_back(B[i+1]);
         }
         
        return check(adj, adj2, 1); 
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends