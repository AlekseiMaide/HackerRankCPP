//
// Roads and Libraries.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

class Graph {
    int V;    // No. of vertices
    long libCost;
    long roadCost;

    // Pointer to an array containing adjacency lists
    list<int> *adj;

    void DFSUtil(int v, bool visited[], long &count);

public:
    Graph(int V, long libCost, long roadCost);   // Constructor
    void addEdge(int v, int w);

    void connectedComponents();
};

// Method to print connected components in an
// undirected graph
void Graph::connectedComponents() {
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    long count{};
    long totalCost{};
    for (int v = 0; v < V; v++)
        visited[v] = false;

    for (int v = 1; v < V; v++) {
        if (visited[v] == false) {
            count = 0;
            // print all reachable vertices
            // from v
            DFSUtil(v, visited, count);
            totalCost += (count != 1) ? (count - 1) * roadCost + libCost : count * libCost;
        }
    }
    cout << totalCost << endl;
}

void Graph::DFSUtil(int v, bool visited[], long &count) {
    visited[v] = true;
    count++;
    //cout << v << " ";

    // Recur for all the vertices
    // adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited, count);
}

Graph::Graph(int V, long libCost, long roadCost) {
    this->V = V;
    this->libCost = libCost;
    this->roadCost = roadCost;
    adj = new list<int>[V];
}

// method to add an undirected edge
void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v);
}

int main() {
    int q{};
    int n{}; //cities
    int m{}; //roads
    long clib{};
    long croad{};
    int u{};
    int v{};

    int tmp{};

    cin >> q;

    while (q-- > 0) {
        cin >> n >> m >> clib >> croad;
        if (clib < croad || m == 0) {
            cout << n * clib << endl;
            for (int i = 0; i < m; i++) {
                cin >> u >> v;
            }
            continue;
        }

        Graph g(n + 1, clib, croad);
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            g.addEdge(u, v);
        }

        g.connectedComponents();
    }


    return 0;
}
