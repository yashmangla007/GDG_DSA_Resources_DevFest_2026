#include <iostream>
using namespace std;

int main() {
    int a[10] = {12, 7, 4, 9, 16, 3, 8, 11, 20, 5};
    int n = 10;

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }

    cout << "Number of even elements = " << count;

    return 0;
}