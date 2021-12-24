#include <bits/stdc++.h>
using namespace std;

int maxx(int a,int b,int c)
{
  if(a>=b && a>=c)
  return a;

  else if(b>=c && b>=a)
  return b;

  else
  return c;
}

int peices(int n,int a, int b,int c)
{
  if(n==0)
  return 0;

  if(n<=-1)
  return -1;

  int res = maxx(peices(n-a,a,b,c),peices(n-b,a,b,c),peices(n-c,a,b,c));

  if(res==-1)
  return -1;

  else
  return 1+res;
}

int main()
{
  int n = 5,a = 3,b = 2,c = 1;
  cout<<"Max no of peices/cuts of the rope can be:"<<peices(5,3,2,1);
  return 0;
}
