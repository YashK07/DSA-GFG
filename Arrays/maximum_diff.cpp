#include <bits/stdc++.h>
using namespace std;

//maximum value of arr[j] - arr[i]; j>i
int maxDiff(int arr[],int n)
{
  int m = arr[0];
  int diff = arr[1] - arr[0];

  for(int j = 1;j<n;j++)
  {
    diff = std::max(arr[j] - m,diff);
    m = std::min(m,arr[j]);
  }
  return diff;
}


int main()
{
  int arr[5] = {3,1,5,2,4};
  int ans = maxDiff(arr,5);

  cout<<ans;
}
