#include<iostream>
using namespace std;

int main(){
    int i, total=0, x, counter=0, q,n=4;

    int at[4] = {0, 2, 3, 325};
    int bt[4] = {5, 3, 2, 7};
    q=3;
    int rt[4] = {5, 3, 2, 7};

    for(i=0, x=n; x!=0;){
        if(rt[i]<=q && rt[i]>0){
            total+=rt[i];
            rt[i]=0;
            x--;
            cout<<"P"<<i+1<<"  "<<bt[i]<<"  "<<total<<"   "<<total-bt[i]-at[i]<<endl;
        }
        else if(rt[i] > 0){
            rt[i]-=q;
            total+=q;
        }
        else{
            total++;
        }
        if(i==n-1){
            i=0;
        }
        else if(at[i+1] <= total) i++;
        else i=0;
    }
    
}