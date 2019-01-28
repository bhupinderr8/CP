#include<bits/stdc++.h>
using namespace std;

int main(){
    int P=5, R=3;
    int need[P][R];
    int maxx[][R] = {{7, 5, 3}, 
                     {3, 2, 2}, 
                     {9, 0, 2}, 
                     {2, 2, 2}, 
                     {4, 3, 3}}; 

    int allot[][R] = {{0, 1, 0}, 
                      {2, 0, 0}, 
                      {3, 0, 2}, 
                      {2, 1, 1}, 
                      {0, 0, 2}}; 

    int process[P] = {0, 1, 2, 3, 4}, avail[R] = {3, 3, 2};

    for(int i=0; i<P; i++){
        for(int j=0; j<R; j++){
            need[i][j] = maxx[i][j]-allot[i][j];
            cout<<need[i][j]<<"  ";
        }
        cout<<endl;
    }

    int finish[P] = {0};
    int safeq[P];

    int count=0;

    while(count<P){
        bool found=false;

        for(int i=0; i<P; i++){
            if(finish[i]==0){
                int j;
                for(j=0; j<R; j++){
                    if(need[i][j] > avail[j]) break;
                }

                if(j==R){
                    for (int k = 0 ; k < R ; k++) 
                        avail[k] += allot[i][k]; 
  
                    // Add this process to safe sequence. 
                    safeq[count++] = i; 
  
                    // Mark this p as finished 
                    finish[i] = 1; 

                    cout<<i<<endl;
  
                    found = true; 
                }
            }
        }
        if(found==false){
            cout<<"System Not in Safe state\n";
            break;
        }
    }

    for(int i=0; i<P; i++){
        cout<<safeq[i]<<"   ";
    }


    return 0;
}