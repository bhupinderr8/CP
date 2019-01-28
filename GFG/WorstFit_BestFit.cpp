#include<bits/stdc++.h>
using namespace std;
#define maxb 100000000

// implemented best fit

int main(){
    int bs[5] = {100, 500, 200, 300, 600};
    int ps[4] = {212, 417, 112, 426};
    
    for(int i=0; i<4; i++){
        int j;
        int besty = 0, index=maxb;
        for(j=0; j<5; j++){
            if((ps[i]<=bs[j]) && (bs[j] > besty)){
                besty = bs[j];
                index = j;
            }
        }
        if(index==maxb){
            cout<<"can't assign block to process P"<<i+1<<"\n";
            continue;
        }
        bs[index]-=ps[i];
        cout<<"P"<<i+1<<"   block = "<<index+1<<endl;
    }
    
    return 0;
}