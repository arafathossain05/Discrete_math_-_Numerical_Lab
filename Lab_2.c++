#include<iostream>
using namespace std;
int main()
{
  int A[3]={1,2,3};
  int B[2]={1,2};
  int mattrix[3][2];
  for (int i = 0; i < 3; i++)
  {
     for (int j = 0; j < 2; j++)
     {
        if(A[i]>B[j])
        {
          cout<<"("<<A[i]<<","<<B[j]<<")";
          mattrix[i][j]=1;
        }
        else
          mattrix[i][j]=0;
     }
  }
  cout<<"\n";
  cout<<"Mattrix_form: "<<endl;
  for (int i = 0; i < 3; i++)
  {
     for (int j = 0; j < 2; j++)
     {
        cout<<" "<< mattrix[i][j]<<" ";
     }
     cout<<"\n"; 
  }
  return 0;
}