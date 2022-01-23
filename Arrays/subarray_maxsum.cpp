#include <bits/stdc++.h>
using namespace std;


int subarrayMaxSum(int arr[],int n)
{
  int sum = arr[0];
  int res = arr[0];
  for(int i = 1;i<n;i++)
  {
    sum = std::max(arr[i],sum + arr[i]);
    //cout<<sum<<" ";

    res = std::max(res,sum);
    //cout<<res;
  }

  return res;
}

int main()
{
 int arr[] = {-5,1,-2,3,-1,2,-2};
 int ans = subarrayMaxSum(arr,7);

cout<<ans;
}
