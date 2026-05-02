#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>

using namespace std;
 
class Graph{
    public:
    unordered_map<int, list<int>> adjList;
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

    void dfs(int u , vector<bool> &visited){
        cout << u << " ";
        visited[u] = true;

        for( auto i : adjList[u]){
            if(visited[i] == false){
                dfs(i, visited);
            }
        }
        
    }
};

int main(){
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(2, 4, 0);
    g.printGraph();
    g.bfs();
    
    cout << endl;
    vector<bool> visited(g.adjList.size(), false);
    g.dfs(0, visited);

}