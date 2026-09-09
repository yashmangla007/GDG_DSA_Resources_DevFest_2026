#include <iostream>
using namespace std;

int main() {
    int a[] = {4, 7, 2, 9, 5};
    int n = 5;
    int x = 7;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}