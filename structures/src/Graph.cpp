#include <vector>
#include <iostream>
#include "Graph.h"

Graph::Graph(size_t n_vertices, bool _oriented) : oriented(_oriented) {
    this->vertices = vector<vector<int>>(n_vertices);
}

void Graph::add_edge(const int &from, const int &to) {
    if ((from >= vertices.size()) || (to >= vertices.size())) {
        throw std::out_of_range("out of range");
    }
    this->vertices[from].push_back(to);
    if (!this->oriented) {
        this->vertices[to].push_back(from);
    }
}

void Graph::show_all_edges() const {
    for (int i = 0; i < vertices.size(); i++) {
        cout << i << " :" << endl;
        for (auto it = vertices[i].begin(); it != vertices[i].end(); it++) {
            cout << "\t" << *it << endl;
        }
        cout << endl;
    }
}