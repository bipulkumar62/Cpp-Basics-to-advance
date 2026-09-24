#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int rows = 2 * n - 1;

    for (int i = 0; i < rows; i++) {
        int current = i < n ? i : rows - 1 - i;

        for (int j = 0; j < n - current - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if (current != 0) {
            for (int j = 0; j < 2 * current - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}