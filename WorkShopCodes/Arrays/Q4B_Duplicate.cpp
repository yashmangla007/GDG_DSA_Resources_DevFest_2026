#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 5, 3, 4, 2, 6, 3, 7, 8};
    int n = 9;

    int freq[10] = {0};

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;

        if (freq[a[i]] == 2) {
            cout << "Duplicate element = " << a[i];
            return 0;
        }
    }

    return 0;
}