#include <bits/stdc++.h>
using namespace std;

sumDigits(int n)
{
  if(n==0)
  return 0;

  int sum = n%10;

  return sum + sumDigits(n/10);
}

int main()
{
  int n;
  cin>>n;
  cout<<"Sum is: "<<sumDigits(n);

  return 0;
}
