#include <iostream>
#include <cmath>
#include <iomanip>   // for formatting
using namespace std;

float f(float x) {
    return x*x - x - 2;
}

int main() {
    float a = 1, b = 3, c;
    int i = 0, max_iter = 20;

    if (f(a) * f(b) >= 0) {
        cout << "Invalid initial values!" << endl;
        return 0;
    }

    cout << fixed << setprecision(4);
    cout << "Iter\t a\t f(a)\t\t b\t f(b)\t " "c\t" "f(c)\n";

    while (i < max_iter) {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        cout << i+1 << "\t "
             << a << "\t " << f(a) << "\t "
             << b << "\t " << f(b) << "\t "
             << c << "\t " << f(c) << endl;

        if (fabs(f(c)) < 0.0001)
            break;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        i++;
    }

    cout << "\nRoot = " << c << endl;

    return 0;
}
