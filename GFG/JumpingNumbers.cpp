#include <iostream>
using namespace std;

void jumping(int num){
    int i;
    int a=10, b=100;
    
}

int main() {
    int i,test,num;
    cin>>test;
    while(test--){
        cin>>num;
        for(i=0; i<=num; i++){
            jumping(i);
        }
        cout<<"\n";
    }
	return 0;
}