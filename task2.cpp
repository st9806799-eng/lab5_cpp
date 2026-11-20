#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double sum10_20 = 0.0;
    for (int i = 10; i <= 20; i++) {
        sum10_20 += sqrt(i);
    }

    double sum1_20 = 0.0;
    int count1_20 = 0;
    for (int i = 1; i <= 20; i++) {
        sum1_20 += sqrt(i);
        count1_20++;
    }
    double avg1_20 = sum1_20 / count1_20;

    cout << "Sum of sqrt from 10 to 20 (variant 5): " << sum10_20 << endl;
    cout << "Average of sqrt from 1 to 20 (variant 10): " << avg1_20 << endl;

    return 0;
}
