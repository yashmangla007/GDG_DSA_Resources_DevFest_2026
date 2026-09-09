#include <iostream>
using namespace std;

int main() {
    int a[] = {3, 9, 4, 7, 2, 8, 5, 6, 1, 10};
    int n = 10;

    int count = 0;

    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            count++;
        }
    }

    cout << "Number of local peaks = " << count;

    return 0;
}