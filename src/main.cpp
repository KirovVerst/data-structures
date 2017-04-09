#include <iostream>
#include "Graph.h"

using namespace std;

int main(int argc, char *argv[]) {
    Graph g(5, true);
    g.add_edge(0, 2);
    g.add_edge(3, 4);
    g.add_edge(0, 3);
    g.show_all_edges();
    return 0;
}