#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

ll primee(ll b){
    if(b<=2 && b>0) return b;
    ll n=0; 
    for(ll i=1; i<sqrt(b); i++){
        if(b%i == 0) n++; 
    }
    ll nn = (int)sqrt(b);
    if(nn*nn == b) return (n*2) +1;
    return n*2;
}

int main() {
	ll b;
    cin>>b;
    cout<<primee(b);
	return 0;
}