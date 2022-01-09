#include <bits/stdc++.h>
using namespace std;
//given a sorted array, remove the duplicates.

int removeDup(int arr[],int n)
{
  int k = n-1,res = 0;
  for(int i = 1;i<=k;i++)
  {
    if(arr[i]!=arr[i-1])
    {
      res+=1;
      arr[res] = arr[i];
    }
  }
  return res;
}
int main()
{
  int arr[] = {3,4,4};
  int res = removeDup(arr,3);

  for(int i = 0;i<=res;i++)
  cout<<arr[i];
}
