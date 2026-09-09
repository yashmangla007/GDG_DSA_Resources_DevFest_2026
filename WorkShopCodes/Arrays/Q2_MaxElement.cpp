#include <iostream>
using namespace std;

int main() {
    int a[] = {12, 7, 25, 4, 18, 31, 9, 16, 22, 5};
    int n = 10;

    int maximum = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > maximum) {
            maximum = a[i];
        }
    }

    cout << "Maximum element = " << maximum;

    return 0;
}