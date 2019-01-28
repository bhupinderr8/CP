#include<bits/stdc++.h>
using namespace std;

int main(){
    int at[4] = {1, 2, 3, 123}, bt[4] = {3, 4, 15, 2};
    int wt[4];

    wt[0] = 0;

    int btt[4];
    btt[0] = 0;

    for(int i=1; i<4; i++){
        btt[i] = btt[i-1] + bt[i-1];
        wt[i] = btt[i] - at[i];
        if(wt[i]<0) wt[i]=0;
        cout<<wt[i]<<"   ";
    }

    return 0;
}