#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

void fun(){
    int n;
    cin>>n;
    int arr[n];
    rep(i, 0, n-1) cin>>arr[i];

    sort(arr, arr+n);
    int maxx = INT_MIN;
    rep(i, 1, n-1){
        maxx = max(maxx, arr[i-1]%arr[i]);
    }
    cout<<maxx<<endl;
}

int main() {
    fun();
	return 0;
}