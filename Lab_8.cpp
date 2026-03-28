#include <iostream>
using namespace std;

int main() {
    int n = 6;
    float x[] = {4, 5, 7, 10, 11, 13};
    float y[6][6];

    // প্রথম কলামে y(x) বসানো
    float f[] = {48, 100, 294, 900, 1210, 2028};
    for(int i = 0; i < n; i++) {
        y[i][0] = f[i];
    }

    // Divided Difference টেবিল তৈরি
    for(int j = 1; j < n; j++) {
        for(int i = 0; i < n - j; i++) {
            y[i][j] = (y[i+1][j-1] - y[i][j-1]) / (x[i+j] - x[i]);
        }
    }

    // যেই value বের করতে হবে
    float value = 15;
    float result = y[0][0];

    float term = 1;

    for(int i = 1; i < n; i++) {
        term *= (value - x[i-1]);
        result += term * y[0][i];
    }

    cout << "f(15) = " << result << endl;

    return 0;
}