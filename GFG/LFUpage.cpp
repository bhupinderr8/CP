#include<bits/stdc++.h>
using namespace std;

int main(){

    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2},temp; 
    int n = sizeof(pages)/sizeof(pages[0]); 
    int capacity = 4;

    int m[4], f[25] = {0}, pf=0, hit=0, t[25] = {0};

    for(int i=0; i<n; i++){
        f[pages[i]]++;
        t[pages[i]] = i;
        int flag=1, k=m[0];
        for(int j=0; j<capacity; j++){
            if(m[j]==-1 || m[j]==pages[i]){
                if(m[j]!=-1){
                    hit++;
                }
                flag=0;
                m[j] = pages[i];
                break;
            }
            if(f[k] > f[m[j]]){
                k = m[j];
            }
        }
        if(flag){
            for(int j=0; j<capacity; j++){
                int minimum_time = 25;
                if((f[m[j]]==f[k]) && (t[m[j]]< minimum_time)){
                    temp = j;
                    minimum_time = t[m[j]];
                }
            }
            t[m[temp]] = 0;
            m[temp] = pages[i];
        }
    }

    return 0;
}