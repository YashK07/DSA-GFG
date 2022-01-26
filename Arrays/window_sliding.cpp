#include <bits/stdc++.h>
using namespace std;

//given an array of n elements, given a no. k, find the sum of k consecutive elements
int ans(int arr[],int n,int k)
{
  int sum = 0,res=0,temp;
  int j = 0;
  for(int i = 0;i<n;i++)
  {
    if(i>(k-1))
    {
      sum-=arr[j];
      j++;
    }
    sum+=arr[i];
    res = std::max(sum,res);
  }
  return res;
}

int main()
{
  int arr[] = {1,8,30,-5,20,7};
  int res = ans(arr,6,3);
  cout<<res;
}
