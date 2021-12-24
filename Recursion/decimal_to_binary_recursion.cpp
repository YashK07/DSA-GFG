#include <bits/stdc++.h>
using namespace std;

void printbits(int n)
{
  if(n==0)
  {
    return;
  }

  printbits(n/2);
  cout<<n%2;
}

int main(){

  int n;
  cin>>n;
  printbits(n);
}
