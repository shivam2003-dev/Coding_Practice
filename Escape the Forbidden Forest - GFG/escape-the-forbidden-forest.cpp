// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


 // } Driver Code Ends
class Solution
{
    public:
    int build_bridges(string str1, string str2)
   {
     
       int n=str1.size();
       int m=str2.size();
       int dp[n+1][m+1];
       for(int i=0;i<=m;i++)
       dp[0][i]=0;
       for(int i=0;i<=n;i++)
       dp[i][0]=0;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               if(str1[i-1]==str2[j-1])
               dp[i][j]=dp[i-1][j-1]+1;
               else
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
       }
       return dp[n][m];
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
        string str1,str2;
        cin >> str1 >> str2;
        Solution obj;
        cout<<obj.build_bridges(str1,str2)<<endl;
    } 
    return 0;
} 
  // } Driver Code Ends