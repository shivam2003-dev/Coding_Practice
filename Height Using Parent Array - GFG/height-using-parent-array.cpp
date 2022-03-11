// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findHeight(int N, int arr[]){
        // Mark array with -101 + height of the node.
        
        // Find -1 and update it.
        for(int i = 0; i < N; i++) if(arr[i] == -1) arr[i] = -101;
        
        auto needToIterate = [&] () {
            for(int i = 0; i < N; i++) if(arr[i] >= 0) return true;
            return false;
        };
        
        // Keep on updating nodes unless all values are negative.
        while(needToIterate()) {
            for(int i = 0; i < N; i++) {
                if(arr[i] >= 0 && arr[arr[i]] < 0) arr[i] = arr[arr[i]] - 1;
            }
        }
        
        return -100 - *min_element(arr, arr + N);
    }
};
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.findHeight(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends