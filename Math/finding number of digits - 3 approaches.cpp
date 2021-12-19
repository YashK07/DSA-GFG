#include <bits/stdc++.h>
using namespace std;

int countDig(int n)
{
  if(n==0)
  return 0;

  return 1 + countDig(n/10);
}

int main()
{
//Finding the count of digits in a number

//1. Iterative Solution
int n = 1234,count = 0;
while(n>0)
{
  n = n/10;
  count++;
}
cout<<count<<endl;

//2. Recursive Solution
n = 1234;
cout<<countDig(n)<<endl;

//3.Logarithmic Approach
cout<<floor(log10(n)+1);

  return 0;
}
