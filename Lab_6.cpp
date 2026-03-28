#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    float x[6] = {1911,1921,1931,1941,1951,1961};
    float y[6] = {12,15,20,27,39,52};

    float diff[6][6];

    // First column
    for(int i=0;i<n;i++)
        diff[i][0] = y[i];

    // Forward difference table
    for(int j=1;j<n;j++)
        for(int i=0;i<n-j;i++)
            diff[i][j] = diff[i+1][j-1] - diff[i][j-1];

    float value = 1946;
    float h = x[1] - x[0];
    float p = (value - x[0]) / h;

    float result = diff[0][0];
    float fact = 1;
    float term = 1;

    for(int i=1;i<n;i++)
    {
        term = term * (p - (i-1));
        fact = fact * i;
        result = result + (term * diff[0][i]) / fact;
    }

    cout << "Population in 1946 = " << result;

    return 0;
}
