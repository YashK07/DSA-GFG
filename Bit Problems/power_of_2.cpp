#include <bits/stdc++.h>
using namespace std;

bool power2(int n)
{
  int r;
  r = n & (n-1); //efficient - t() = constant time;

  if(r==0)
  return true;

  else
  return false;
}

int main()
{
  int n;
  cin>>n;

  if(power2(n))
  cout<<"The number is in power of 2!";

  else
  cout<<"The number is not in power of 2 :(";

  return 0;
}
