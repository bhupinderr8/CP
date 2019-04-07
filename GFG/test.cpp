#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

long arr[10001];
long maxyet;

void ugly(){
	long n;
	cin>>n;
	if(arr[n-1] != -1){
		cout<<arr[n-1]<<endl;
		return;
	}
	long a=0, b=0, c=0;
	for (int i = maxyet; i < n; ++i) {
        long prev = arr[i - 1];

        while (arr[a] * 2 <= prev) {
            ++a;
        }
        while (arr[b] * 3 <= prev) {
            ++b;
        }
        while (arr[c] * 5 <= prev) {
            ++c;
        }

        long candidate1 = arr[a] * 2;
        long candidate2 = arr[b] * 3;
        long candidate3 = arr[c] * 5;

        arr[i] = min(candidate1, min(candidate2, candidate3));
    }
	maxyet = max(maxyet, n);
	cout<<arr[n-1]<<endl;
}

int main() {
	ll test, n;
	cin>>test;
	maxyet=1;
	memset(arr, -1, sizeof(arr));
	arr[0] = 1;
	while(test--){
		ugly();
	}
	return 0;
}