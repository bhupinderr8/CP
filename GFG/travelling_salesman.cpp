#include <bits/stdc++.h>
#include<unistd.h>
using namespace std;

int n=4;

int dist[10][10] = {
    {0, 20, 42, 25},
    {20, 0, 30, 34},
    {42, 30, 0, 10},
    {25, 34, 10, 0}
};

int VISITED_ALL = (1<<n) -1;

int tsp(int mask, int pos){
    if(mask == VISITED_ALL) return dist[pos][0];

    int ans = 1000009;

    for(int city=0; city<n; city++){
        if((mask&(1<<city)) == 0){
            ans = min(ans, dist[pos][city] + tsp(mask|(1<<city), city));
        }
    }

    return ans;

}

int main() {
    cout<<tsp(1, 0)<<endl;
	return 0;
}