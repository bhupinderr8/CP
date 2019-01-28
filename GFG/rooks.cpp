#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

int main() {
	ll n;
	cin>>n;
	int a[n], b[n];
	rep(i, 0, n-1) cin>>a[i];
	rep(i, 0, n-1) cin>>b[i];

	int m=0, o=0;
	while(o<n){
		int temp = b[o], k=m;
		while(a[m] != temp && m<n){
			m++;
		}
		if(m>=n){
			cout<<"0 ";
		}
		else{
			cout<<m-o+1<<" ";
		}
		m=k;
		o++;
	}
	return 0;
}