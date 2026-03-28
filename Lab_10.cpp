#include <iostream>
using namespace std;

float f(float x)
{
    return x*x - 4*x - 10;
}

int main()
{
    float a = -2, b = -1.5, c;

    for(int i=0;i<20;i++)
    {
        c = (a + b) / 2;

        if(f(c) == 0)
            break;

        if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << "Root = " << c;

    return 0;
}
