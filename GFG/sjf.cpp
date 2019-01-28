#include<iostream>
using namespace std;
#define int_minn 100000

struct Process {
    int pid;
    int bt;
    int at;
};

void findWt(Process proc[], int n, int wt[]){
    int rt[n];
    for(int i=0; i<n; i++) rt[i]=proc[i].bt;

    int complete=0, t=0, minn=int_minn;
    int shortest=0, finish_time;
    bool check = false;

    while(complete!=n){
        for(int j=0; j<n; j++){
            if((proc[j].at <= t) && (rt[j] < minn) && (rt[j] > 0)){
                shortest = j;
                minn = rt[j];
                check = true;
            }
        }

        if(check == false){
            t++;
            continue;
        }

        rt[shortest]--;
        minn = rt[shortest];
        if(minn==0) minn = int_minn;

        if(rt[shortest] == 0){
            complete++;
            check = false;
            finish_time = t+1;
            wt[shortest] = finish_time - proc[shortest].at - proc[shortest].bt;
            if(wt[shortest]<0) wt[shortest]=0;
        }
        t++;
    }

}

void findTat(Process proc[], int n, int wt[], int tat[]){
    for(int i=0; i<n; i++){
        tat[i] = proc[i].bt + wt[i];
    }
}

void findavgWt(Process proc[], int n){
    int wt[n], tat[n], total_wt=0, total_tat=0;

    findWt(proc, n, wt);

    findTat(proc, n, wt, tat);

    cout << "Processes "
        << " Burst time "
        << " Waiting time "
        << " Turn around time\n"; 
  
    // Calculate total waiting time and 
    // total turnaround time 
    for (int i = 0; i < n; i++) { 
        total_wt = total_wt + wt[i]; 
        total_tat = total_tat + tat[i]; 
        cout << " " << proc[i].pid << "\t\t"
            << proc[i].bt << "\t\t " << wt[i] 
            << "\t\t " << tat[i] << endl; 
    } 
  
    cout << "\nAverage waiting time = "
        << (float)total_wt / (float)n; 
    cout << "\nAverage turn around time = "
        << (float)total_tat / (float)n; 
}

int main(){
    Process proc[] = { { 1, 6, 1 }, { 2, 8, 1 }, 
                    { 3, 7, 2 }, { 4, 3, 3 } }; 
    int n = sizeof(proc) / sizeof(proc[0]); 
    findavgWt(proc, n);
    return 0;
}