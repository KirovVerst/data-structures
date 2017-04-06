#include <iostream>
#include "sorting.h"

using namespace std;

int main(int argc, char *argv[]) {
    unsigned int n = 10;
    double arr[] = {1, 5, 2, 6, 2, -5, 2, 4, 6, -7};
    quick_sort(&arr[0], n, true);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}