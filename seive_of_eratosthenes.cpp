#include <bits/stdc++.h>
using namespace std;
//Finding prime numbers less than a specific number
int main()
{
  int n;
  cin>>n;
  vector<bool> v(n+1,true);

  for(int i = 2;i*i<=n;i++)
  {
    if(v[i]){
      for(int j = 2*i;j<=n;j = i+j)
      {
        v[j] = false; //the multiples of prime form composite
      }
    }
  }

    for(int j = 2;j<=n;j++)
    {
      if(v[j])
      {
        cout<<j<<" ";
      }
    }
  }
