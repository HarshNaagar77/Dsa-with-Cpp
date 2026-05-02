#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>

using namespace std;
 
class Graph{
    unordered_map<int, list<int>> adjList;
    public:
    void addEdge(int u, int v, bool direction){
        // direction = 0 -> undirected
        // direction = 1 -> directed
        adjList[u].push_back(v);
        if(direction == 0){
            adjList[v].push_back(u);
        }
    }

    void printGraph(){
        for(auto i: adjList){
            cout << i.first << "->";
            for(auto j: i.second){
                cout << j << ",";
            }
            cout << endl;
        }
    }
    void bfs(){
        queue<int> q;
        vector<bool> visited(adjList.size(), false);
        q.push(0);
        visited[0] = true;

        while( q.size() > 0){
            int u = q.front();
            q.pop();
            cout << u << " ";

            for(auto i : adjList[u]){
                if(visited[i] == false){
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
};

int main(){
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(3, 4, 0);
    g.addEdge(4, 5, 0);
    g.printGraph();
    g.bfs();

}