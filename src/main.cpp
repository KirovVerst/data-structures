#include "../include/vector.h"
#include <iostream>

using namespace std;

int main() {
    vector v;
    for (int i = 0; i < 35; i++) {
        v.append(i);
    }

    for (unsigned int j = 0; j < v.size(); ++j) {
        cout << v.elementAt(j) << " ";
    }
    cout << endl;
    return 0;
}