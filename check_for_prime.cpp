#include <iostream>
using namespace std;

bool checkPrime(int a) //naive
{
  for(int i = 2;i<a;i++)
  {
    if(a%i==0)
    return false;
  }
  return true;
}

bool checkPrimeOpt(int a)
{
  if(a==1)
  return false;

  if(a==2 || a==3)
  return true;

  if(a%2==0 || a%3==0) //removing cases to make more Efficient
  {
    return true;
  }

  for(int i = 5;i*i<=a;i=i+6) //i<=n^1/2
  {
    if(a%i==0 || a%(i+2)==0)
    return false;
  }
  return true;
}

int main()
{
  int n;
  cin>>n;
  cout<<"##Naive Approach##"<<endl;
  if(checkPrime(n))
  cout<<"Prime!!"<<endl;
  else
  cout<<"Composite"<<endl;

  cout<<"##Optimized Approach##"<<endl;
  if(checkPrimeOpt(n))
  cout<<"Prime!!"<<endl;
  else
  cout<<"Composite"<<endl;
}
