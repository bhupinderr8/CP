#include<bits/stdc++.h>
using namespace std;

bool find(int a, int mat[], int n){
    for(int i=0; i<n; i++){
        if(mat[i]==a) return true;
    }
    return false;
}

int main(){

    int q[10] = {1, 2, 1, 0, 3, 0, 4, 4, 1, 0};

    int mat[3];

    memset(mat, -1, sizeof(mat));

    int pf=0;

    for(int i=0; i<10; i++){
        if(find(q[i], mat, 3)){
            cout<<"No Page Fault for number = "<<q[i]<<"\n";
            cout<<mat[0]<<"   "<<mat[1]<<"   "<<mat[2]<<endl;
            continue;

        }
        else{
            for(int j=3-1; j>=0; j--){
                swap(mat[j], mat[j+1]);
            }
            mat[0] = q[i];
            pf++;
            cout<<"Page Fault\n";
            cout<<mat[0]<<"   "<<mat[1]<<"   "<<mat[2]<<endl;
        }
    }

    cout<<"\n\n"<<pf<<"\n\n";
    return 0;
}