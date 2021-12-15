#include <iostream>
using namespace std;

void primeFactorsEfficient(int a) //optimzied approach
{
  if(a<=1)
  return;
  cout<<"Prime Factors are:"<<endl;
  for(int i = 2;i*i<=a;i++)
  {
    if(a%i==0)
    {
      while(a%i==0)
      {
        cout<<i<<" ";
        a = a/i;
      }
    }
  }
}

int main()
{
  int n;
  cin>>n;
  primeFactorsEfficient(n);
}
