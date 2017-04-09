#ifndef DATA_STRUCTURES_ALGORITHMS_GRAPH_H
#define DATA_STRUCTURES_ALGORITHMS_GRAPH_H

#include <vector>

using namespace std;

class Graph {
    vector<vector<int>> vertices;
    bool oriented;
public:
    Graph(size_t n_vertices, bool _oriented = false);

    void add_edge(const int &u, const int &v);

    void show_all_edges() const;
};


#endif //DATA_STRUCTURES_ALGORITHMS_GRAPH_H
