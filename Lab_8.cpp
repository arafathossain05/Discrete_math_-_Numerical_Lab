#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 6;
    float x[] = {4, 5, 7, 10, 11, 13};
    float y[6][6];

    float f[] = {48, 100, 294, 900, 1210, 2028};

    // First column
    for(int i = 0; i < n; i++) {
        y[i][0] = f[i];
    }

    // Divided Difference Table
    for(int j = 1; j < n; j++) {
        for(int i = 0; i < n - j; i++) {
            y[i][j] = (y[i+1][j-1] - y[i][j-1]) / (x[i+j] - x[i]);
        }
    }

    // 🔷 Print Table
    cout << "\nDivided Difference Table:\n\n";

    cout << "x\t f(x)\t 1st DD\t 2nd DD\t 3rd DD\t 4th DD\t 5th DD\n";

    for(int i = 0; i < n; i++) {
        cout << x[i] << "\t";
        for(int j = 0; j < n - i; j++) {
            cout << y[i][j] << "\t";
        }
        cout << endl;
    }

    // Interpolation
    float value = 15;
    float result = y[0][0];
    float term = 1;

    for(int i = 1; i < n; i++) {
        term *= (value - x[i-1]);
        result += term * y[0][i];
    }

    cout << "\nf(15) = " << result << endl;

    return 0;
}
