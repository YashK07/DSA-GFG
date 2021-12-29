#include <bits/stdc++.h>
using namespace std;
//<<<shubh jain, mumbai>>. h<cout> hack

int solve(int n,int k)
{
    if(n==1)
    {
        return 0;
    }

    return ((solve(n-1,k)+k)%n);
}

int josephus(int n, int k)
{
  return (solve(n,k)+1);
}

int main()
{
  int n,k;
  cin>>n>>k;

  cout<<josephus(n,k);
}
