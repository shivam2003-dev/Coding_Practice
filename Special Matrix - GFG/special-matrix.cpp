// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
    int blocked[n+1][m+1];
    memset(blocked,0,sizeof(blocked));
    int k=blocked_cells.size();
    for(int i=0;i<k;i++){
        blocked[blocked_cells[i][0]][blocked_cells[i][1]]=1;
    }
 
  int dp[n+1][m+1];
  memset(dp,0,sizeof(dp));
  int mod=1e9+7;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
          if(blocked[i][j])dp[i][j]=0;
          else{
          if(i==1&&j==1)dp[i][j]=1;
          if(i>1)dp[i][j]+=dp[i-1][j]%mod;
          if(j>1)dp[i][j]+=dp[i][j-1]%mod;
          dp[i][j]%=mod;
          }
      }
  }
  return dp[n][m];
}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int>>blocked_cells;
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			blocked_cells.push_back({x, y});
		}
		Solution obj;
		int ans = obj.FindWays(n, m, blocked_cells);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends