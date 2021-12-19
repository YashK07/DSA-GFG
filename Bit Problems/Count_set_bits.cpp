#include <bits/stdc++.h>
using namespace std;


int count(int n) //naive --> t() = theta(no. of bits)
{
  vector<int>v;
  int count1 = 0;
  while(n>0)
  {
    int r = n%2;
    if(r==1)
    count1++;
    n = n/2;
  }

  return count1;
}

int brian_kerningam(int n) //efficient algorithm -->  t() = theta(no. of bit sets)
{
int count;
  while(n > 0)
  {
    n = n & (n-1);
    count++;
  }
  return count;
}


int main()
{
  int n;
  cin>>n;
  cout<<count(n)<<endl;
  cout<<brian_kerningam(n);

  return 0;
}
