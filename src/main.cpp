#include "../inlcude/linked_list.h"
#include "../inlcude/vector.h"
#include <iostream>

using namespace std;

int main() {
    linked_list l;
    l.push(1234);
    cout << l.pop() << endl;
    cout << l.is_empty() << endl;
    return 0;
}