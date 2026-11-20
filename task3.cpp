#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;

    cout << "Enter a, b, h: ";
    cin >> a >> b >> h;

    if (h <= 0) {
        cout << "Step h must be positive." << endl;
        return 1;
    }

    cout << left << setw(12) << "X" << setw(15) << "Y" << endl;
    cout << "---------------------------" << endl;

    double x = a;
    while (x <= b + 1e-9) {
        if (x < 7.0 || (x + 5.0) == 0.0) {
            cout << "x = " << x << " is outside the domain (ODZ). Stopping." << endl;
            break;
        }

        double y = 8.0 + sqrt(x - 7.0) / (x + 5.0);
        cout << left << setw(12) << x << setw(15) << y << endl;

        x += h;
    }

    return 0;
}
