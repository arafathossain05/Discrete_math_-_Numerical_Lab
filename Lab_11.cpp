#include <iostream>
using namespace std;

float f(float x){
    return x*x - x - 2;
}

int main(){

    float a=1,b=3,c;

    for(int i=0;i<20;i++){

        c = (a*f(b)-b*f(a))/(f(b)-f(a));

        if(f(c)==0)
            break;
        else if(f(a)*f(c)<0)
            b=c;
        else
            a=c;
    }

    cout<<"Root = "<<c;

    return 0;
}
