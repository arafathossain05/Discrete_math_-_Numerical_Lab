#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    float x[4] = {5,6,9,11};
    float y[4] = {12,13,14,16};

    float xp = 10;
    float yp = 0;

    for(int i=0;i<n;i++)
    {
        float p = 1;

        for(int j=0;j<n;j++)
        {
            if(i != j)
            {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }

        yp = yp + p * y[i];
    }

    cout << "Value of y when x = 10 : " << yp;

    return 0;
}
