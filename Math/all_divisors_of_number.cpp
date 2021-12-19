#include <iostream>
using namespace std;

void divisors(int m) //efficient
{
  for(int i = 1; i*i<=m;i++)
  {
    if(m%i==0)
    {
      cout<<i<<" ";
      if(i != m/i) //eg - 25 = 5*5 so print only 5 once
      cout<<m/i<<" ";
    }
  }
}

int main()
{
  int n;
  cin>>n;
  cout<<"The divisors are as follows: ";
  divisors(n);
}
