#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 4, 6, 8, 10, 12, 14};
    int n = 7;
    int x = 10;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == x) {
            found = true;
            break;
        }
        else if (a[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}