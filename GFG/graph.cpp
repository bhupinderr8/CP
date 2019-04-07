#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;


template <typename T>
class Graph{
        

    public:
    Graph(){
        
    }

    void addEdge(T u, T v, bool bidirectional=true){
        adjList[u].push_back(v);
        if(bidirectional) adjList[v].push_back(u);
    }

    void printList(){
        for(auto row: adjList){
            cout<<row.first<<" --> ";
            for(int node: row.second){
                cout<<node<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(int source){
        queue<int> q;
        bool *visited = new bool[adjList.size()]{0};

        q.push(source);
        visited[source] = true;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout<<node<<" ";
            for(int x:adjList[node]){
                if(!visited[x]){
                    q.push(x);
                    visited[x] = true;

                }
            }
        }
        cout<<endl;
    }

};

int main() {
    Graph<int> g;

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 2);
    g.printList();
    g.bfs(0);
	return 0;
}