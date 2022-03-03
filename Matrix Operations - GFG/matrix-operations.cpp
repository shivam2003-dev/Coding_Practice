// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    char changeDirection(char dir){
       if(dir == 'U') return 'R';
       else if(dir == 'R') return 'D';
       else if(dir == 'D') return 'L';
       else if(dir == 'L') return 'U';
       return '$';
   }
   
   bool isValid(int x,int y,int n,int m){
       if(x < 0 || x >= n || y < 0 || y >= m) return (false);
       return (true);
   }
   
   pair<int,int> endPoints(vector<vector<int>> matrix){
       int n = matrix.size(), m = matrix[0].size();
       int i = 0,j = 0;
       int lasti = -1, lastj = -1;
       
       char current_dir = 'R';
       while(isValid(i,j,n,m)){
           lasti = i;
           lastj = j;
           if(matrix[i][j] == 0){
               if(current_dir == 'R') j++;
               else if(current_dir == 'L') j--;
               else if(current_dir == 'U') i--;
               else if(current_dir == 'D') i++;
           }
           else{
               matrix[i][j] = 0;
               current_dir = changeDirection(current_dir);
               if(current_dir == 'R') j++;
               else if(current_dir == 'L') j--;
               else if(current_dir == 'U') i--;
               else if(current_dir == 'D') i++;
           }
       }
       
       return {lasti,lastj};
   }

};

// { Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}  // } Driver Code Ends