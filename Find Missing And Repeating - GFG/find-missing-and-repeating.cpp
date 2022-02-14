// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
     map<int,int> mp;
     for(int i=0;i<n;i++) mp[arr[i]]++;int b=0;
     for(int i=0;i<n;i++)
     {
         if(mp.find(i+1)==mp.end())
         {
             b=i+1;
         }
     }int r=0;
     for(auto i: mp)
     {
         if(i.second>1)
         {
            r=i.first;
         }
     }
     
   arr[0]=r;arr[1]=b;
       return arr;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends