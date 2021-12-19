#include <bits/stdc++.h>
using namespace std;

int power(int m,int n)
{
  if(n==0)
  return 1;

if(n%2==0)
{
  int res = power(m,n/2) * power(m,n/2);
  return res;
}
else
{
  int res = power(m,n-1) * m;
  return res;
}
}

int main()
{
  int n,m;
  cin>>n>>m;
cout<<power(n,m);
}
