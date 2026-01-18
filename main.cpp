#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;

    for (int i = 1; i <= abs(a); i++) {
        if (a % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}

