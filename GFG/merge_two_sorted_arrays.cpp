#include <cstring>
using namespace std;

int x[50001], y[50001], final[100001];

void sort(){
    long long int xLen, yLen, i, j;
    cin>>xLen>>yLen;
    memset(x, -1, sizeof(x));
    memset(y, -1, sizeof(y));
    memset(final, -1, sizeof(final));
    
    for(i=0; i<xLen; i++){
        cin>>x[i];
    }
    
    for(i=0; i<yLen; i++){
        cin>>y[i];
    }
    
    i=0;
    j=0;
    long long int k=0;
    while(i < xLen && j < yLen){
        final[k++] = x[i]<y[j]?x[i++]:y[j++];
    }
    
    while(i < xLen){
        final[k++] = x[i++];
    }
    
    while(j < yLen){
        final[k++] = y[j++];
    }
    
    for(i=xLen+yLen-1; i>=0; i--){
            cout<<final[i]<<" ";
        }
    
    
    cout<<"\n";
}

int main() {
	int test;
	cin>>test;
	while(test--){
	    sort();
	}
	return 0;
}