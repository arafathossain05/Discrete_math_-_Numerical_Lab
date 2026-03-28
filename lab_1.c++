#include<iostream>
using namespace std;
int main()
{
  int a[4]={1,2,3,4};
  cout<<"R1 (a divides b) : ";
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
        if(a[j]%a[i]==0)
        {
          cout<<"("<<a[i]<<","<<a[j]<<")";
        }
    }
  }
  cout<<"\n"<<"R2 (a<=b) : ";
  for (int i = 0; i < 4 ; i++)
  {
    for (int j = 0; j < 4; j++)
    {
       if(a[i]<=a[j])
       {
         cout<<"("<<a[i]<<","<<a[j]<<")";
       }
    }
  }
  return 0;
}
