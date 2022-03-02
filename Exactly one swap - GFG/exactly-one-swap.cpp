// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   long long countStrings(string s)
    {
        // code here
        long long ans=0;
        int size=s.size();
        vector<long long> count(26,0);
        // storing frequency of characters in s
        for(auto &it:s)
            count[it-'a']++;
        int i=0;
        bool flag=false; 
        // flag if any duplicate is there, we have 1+ans, as the main
        // string is also our answer
        for(auto &it:s){
            if(count[it-'a']==1){
                ans+=(long long)(size-i-1); 
                // if this is present only once in the suffix from here,
                // we simply can swap it up all adjacents.
            }else{
                flag=true;
                for(int j=0;j<26;j++){
                    if((it-'a') == j)continue;
                    ans+=(count[j]); // otherwise pair it up with
                    // all other elements after this rather than
                    // it itself.
                }
            }
            count[it-'a']--;
            i++;
        }
        return flag?ans+1:ans;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends