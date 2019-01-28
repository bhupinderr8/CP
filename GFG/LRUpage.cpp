#include<bits/stdc++.h>
using namespace std;

int findLRU(int time[], int n){
    int i, minimum = time[0], pos = 0;
 
    for(i = 1; i < n; ++i){
        if(time[i] < minimum){
            minimum = time[i];
            pos = i;
        }
    }
    
    return pos;
}

int main(){

    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2}; 
    int n = sizeof(pages)/sizeof(pages[0]); 
    int capacity = 4;

    int m[4], t[4], pf=0;

    int timer=0;

    memset(m, -1, sizeof(m));

    for(int i=0; i<n; i++){
        int flag1=0, flag2=0;
        for(int j=0; j<capacity; j++){
            if(m[j]==pages[i]){
                flag1=flag2=1;
                timer++;
                t[j] = timer;
                cout<<"No page fault for num = "<<pages[i]<<endl;
                cout<<m[0]<<"   "<<m[1]<<"   "<<m[2]<<"   "<<m[3]<<endl;
                break;
            }
        }

        if(flag1 == 0){
            for(int j=0; j<capacity; j++){
                if(m[j]==-1){
                    m[j] = pages[i];
                    pf++;
                    timer++;
                    t[j] = timer;
                    flag2=1;
                    cout<<"page fault for num = "<<pages[i]<<endl;
                    cout<<m[0]<<"   "<<m[1]<<"   "<<m[2]<<"   "<<m[3]<<endl;
                    break;
                }
            }
        }
        if(flag2 == 0){
            int pos = findLRU(t, capacity);
            timer++;
            m[pos] = pages[i];
            t[pos] = timer;
            pf++;
            cout<<"page fault for num = "<<pages[i]<<endl;
            cout<<m[0]<<"   "<<m[1]<<"   "<<m[2]<<"   "<<m[3]<<endl;
        }
    }

    return 0;
}