#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter x" << i << ": ";
        cin >> x;

        y = sin(x) + fabs(5.0 * x - 1.5);
        cout << "y" << i << " = " << y << endl;
    }

    return 0;
}
