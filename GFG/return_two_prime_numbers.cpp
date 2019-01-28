#include <cstring>
#include <cmath>
using namespace std;

bool arr[10001];

void twoPrimes(int n){
    memset(arr, true, sizeof(arr));
    for(int i=2; i*i <=n; i++){
        if(arr[i] == true){
            for(int j=i*2; j<=n; j+=i) arr[j]=false;
        }
    }
    
    for(int i=2; i<=n; i++){
        if(arr[i] == true && arr[n-i] == true){
            cout<<i<<" "<<n-i<<endl;
            return;
        }
    }
}

int main() {
	int test, n;
	cin>>test;
	while(test--){
		cin>>n;
	    twoPrimes(n);
	}
	return 0;
}