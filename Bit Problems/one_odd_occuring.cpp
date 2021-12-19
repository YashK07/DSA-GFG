#include <bits/stdc++.h>
using namespace std;

int findOdd(int arr[], int n)
{
  int res = 0;
  for(int i = 0;i<n;i++)
  {
    res = res ^ arr[i];
    //cout<<res;
    return res
  }
}

int main()
{
  int arr[7] = {1,2,2,1,5,5,8};

  cout<<"The odd times appearing number is: "<<findOdd(arr,7);

  return 0;
}
