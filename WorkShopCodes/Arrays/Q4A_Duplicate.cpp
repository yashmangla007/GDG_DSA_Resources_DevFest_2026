#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 5, 3, 4, 2, 6, 3, 7, 8};
    int n = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << "Duplicate element = " << a[i];
                return 0;
            }
        }
    }

    return 0;
}