#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float f(float x)
{
   return x*x-4*x-10;
}
int main()
{
   int max_iter=20,i=0;
   float a=-2;
   float b=-1.5;
   float c;

   cout<<"Bisection Method\n";
   if(f(a)*f(b)>0)
   {
      cout<<"Invalid initial value";
      return 0;
   }
   else
   {
      cout<<"Root exiest in interval [-2,-1.5]\n";
   }
   cout<<fixed<<setprecision(4);
   cout<<"No."<<"\t"<<"a"<<"\t"<<"f(a)"<<"\t\t"<<" b"<<"\t"<<"f(b)"<<"\t"<<" c"<<" \t"<<"  f(c)"<<" \n";
   while (i<max_iter)
   {
      c=(a+b)/2;
      cout<<i+1<<"\t" <<a<<"\t "<<f(a)<<"\t"<<b<<"\t "<<f(b)<<"\t "<<c<<"\t "<<f(c)<<"\n ";
      if(fabs(f(c))<0.0001)
      {
         break;
      }
      if(f(a)*f(c)>0)
      {
        a=c;
      }
      else
      {
        b=c;
      }
      i++;
   }
   
   cout<<"\n\nRoot : "<<c<<endl;
   return 0;
}
