// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

const int M = 1e4;
bitset<M+1> prime;

void sieve() {
	prime.set();
	prime[0] = prime[1] = 0;

	for(int i=2; i*i<=M; i++) {
		if(prime[i])
			for(int j=i*i; j<=M; j+=i)
				prime[j] = 0;
	}
}

class Solution{
public:
    vector<int> primeDivision(int N){
        sieve();
        for(int i=2; i<=N/2; i++)
            if(prime[i] and prime[N-i]) return {i,N-i};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends