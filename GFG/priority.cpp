#include<bits/stdc++.h>
using namespace std;

struct process 
{ 
int at,bt,pr,pno; 
};process proc[50];

bool comp(process a, process b){
    if(a.at == b.at){
        return a.pr<b.pr;
    }
    return a.at<b.at;
}

int main(){
    int totalprocess=5;

int arrivaltime[] = { 1, 2, 2, 3, 4 }; 
int bursttime[] = { 3, 5, 1, 7, 4 }; 
int priority[] = { 3, 4, 1, 7, 8 }; 
      
for(int i=0;i<totalprocess;i++) 
{ 
    proc[i].at=arrivaltime[i]; 
    proc[i].bt=bursttime[i]; 
    proc[i].pr=priority[i]; 
    proc[i].pno=i+1; 
    }  
    sort(proc, proc+totalprocess, comp);

    int total=0;

    int wt[5];
    wt[0] = 0;

    int btt[5];
    btt[0]=0;

    for(int i=1; i<totalprocess; i++){
        btt[i] = btt[i-1]+proc[i-1].bt;
        wt[i] = btt[i] - proc[i].at;
    }

    for(int i=0; i<totalprocess; i++){
        cout<<proc[i].at<<"   "<<proc[i].bt<<"   "<<wt[i]<<endl;
    }

    return 0;
}