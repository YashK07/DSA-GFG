#include <iostream>
using namespace std;

int findGCD(int n, int m) //naive
{
  int l,ans = 0;
  l = min(n,m);
  for(int i = 1;i<=l;i++)
  {
    if(n%i==0 && m%i==0)
    {
      ans = i;
    }
  }
  return ans;
}

int euclideanGCD(int n,int m) //Efficient
{
  while(n!=m)
  {
    if(n>m)
    n = n-m;
    else
    m = m - n;
  }
  return n;
}

int main()
{
  int m,n;
  cin>>m>>n;
  int res = findGCD(m,n);
  cout<<res<<endl;
  res = euclideanGCD(m,n);
  cout<<res;

  return 0;
}
