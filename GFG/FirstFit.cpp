#include<bits/stdc++.h>
using namespace std;

int main(){
    int bs[5] = {100, 500, 200, 300, 600};
    int ps[4] = {212, 417, 112, 426};
    
    for(int i=0; i<4; i++){
        int j;
        for(j=0; j<5; j++){
            if(ps[i]<=bs[j]){
                bs[j]-=ps[i];
                cout<<"P"<<i+1<<"   block = "<<j+1<<endl;
                break;
            }
        }
        if(j==5) cout<<"can't assign block to process P"<<i+1<<"\n";

    }
    
    return 0;
}