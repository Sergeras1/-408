#include <iostream>

using namespace std;

int main() {
    int height;
    cout << "Enter the height for the triangle: " << endl;
    cin >> height;
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
        cout << " ";
        }
        for (int j = 1; j <= 2 * i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= height; i++) {
        cout << endl;
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
    }
}

