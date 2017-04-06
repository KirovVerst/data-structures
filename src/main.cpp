#include <iostream>
#include "sorting.h"

using namespace std;

int main(int argc, char *argv[]) {
    unsigned int n = 5;
    double arr[] = {3, 5, -1, 4, -2};
    quick_sort(&arr[0], n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}