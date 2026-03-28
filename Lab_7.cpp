#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    float x[8] = {1,2,3,4,5,6,7,8};
    float y[8] = {1,8,27,64,125,216,343,512};

    float diff[8][8];

    for(int i=0;i<n;i++)
        diff[i][0] = y[i];

    // Backward difference table
    for(int j=1;j<n;j++)
        for(int i=n-1;i>=j;i--)
            diff[i][j] = diff[i][j-1] - diff[i-1][j-1];

    float value = 7.5;
    float h = x[1] - x[0];
    float p = (value - x[n-1]) / h;

    float result = diff[n-1][0];
    float fact = 1;
    float term = 1;

    for(int i=1;i<n;i++)
    {
        term = term * (p + (i-1));
        fact = fact * i;
        result = result + (term * diff[n-1][i]) / fact;
    }

    cout << "f(7.5) = " << result;

    return 0;
}
