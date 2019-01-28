#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

int knap(){
	int n, w;
	cin>>n;
	cin>>w;
	int dp[n+1][w+1], W[n], v[n];
	rep(i, 0, n-1) cin>>v[i];
	rep(i, 0, n-1) cin>>W[i];

	for(int i=0; i<=n; i++){
		for(int j=0; j<=w; j++){
			if(i==0 || j==0) dp[i][j]=0;
			else if(j >= W[i-1]){
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-W[i-1]]+v[i-1]);
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
			// cout<<dp[i][j]<<" ";
		}
		// cout<<endl;
	}
	return dp[n][w];
}

int main() {
	ll test, n;
	cin>>test;
	while(test--){
		cout<<knap()<<endl;
	}
	return 0;
}