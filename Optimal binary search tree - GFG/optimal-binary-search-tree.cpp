// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int dp[101][101];
    int sf(int i, int j, int freq[]) {
        int sum = 0;
        for (int k = i; k <= j; k++) {
            sum += freq[k];
        }
        return sum;
    }
    int solve(int freq[],int i,int j){
        if(i>j)return 0;
        if (i == j)
        return dp[i][j] = freq[i];
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int fsum=sf(i,j,freq);
        int ans=INT_MAX;
        for(int k=i;k<=j;k++){
            int temp=solve(freq,i,k-1)+solve(freq,k+1,j);
            ans=min(temp,ans);
        }
        return dp[i][j]=ans+fsum;
    }
    int optimalSearchTree(int keys[], int freq[], int n)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(freq,0,n-1);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int keys[n];
        for(int i=0;i<n;i++)cin>>keys[i];
        int freq[n];
        for(int i=0;i<n;i++)cin>>freq[i];
        Solution ob;
        cout<<ob.optimalSearchTree(keys, freq, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends