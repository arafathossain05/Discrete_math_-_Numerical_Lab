#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  float x[4]={5,6,9,11};
  float y[4]={12,13,14,16};
  int n=4;
  float xp=10;
  float yp=0;

  cout<<"Lagrange's interpolation formula step by step:\n";
  cout<<fixed<<setprecision(4);

  for (int i = 0; i < n; i++)
  {
    float p=1;
    bool first = true;

    cout<<"\nL_"<<i<<"(x) : ";

    for (int j = 0; j < n; j++)
    {
      if(i!=j)
      {
        if(!first) cout<<" * ";

        cout<<"("<<xp<<"-"<<x[j]<<")/"<<"("<<x[i]<<"-"<<x[j]<<")";

        p = p*(xp-x[j])/(x[i]-x[j]);

        first = false;
      }
    }

    cout<<" = "<<p<<endl;

    yp = yp + p*y[i];
    cout<<"\n";
    
  }

  cout<<"\n\ninterpolated value p(10) : "<<yp<<endl;

  return 0;
}
