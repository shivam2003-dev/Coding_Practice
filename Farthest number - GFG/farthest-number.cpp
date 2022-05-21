// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int n,vector<int> arr){
       //code here
        vector<int> ans(n);
       for (int i = 0; i < n; i++)
       {
           ans[i] = -1;
       }

       for (int i = 0; i < n; i++)
       {
           for (int j = n - 1; j >= i; j--)
           {
               if (arr[i] > arr[j])
               {
                   ans[i] = j;
                   break;
               }
           }
       }
       return ans;
   }
   
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends