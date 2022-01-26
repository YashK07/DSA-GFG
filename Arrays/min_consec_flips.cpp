#include <bits/stdc++.h>
using namespace std;

//min consecutive flips required to make all the elements same --> Either flip 0->1
int minFlips(int arr[],int n)
{
  int n1=0,n2=0;
  int temp[2] = {1,1};
  for(int i = 0;i<n-1;i++)
  {
    if(arr[i]==0 && arr[i+1]==1)
    {
      n1++;
    }
    else if(arr[i]==1 && arr[i+1]==0)
    {
      n2++;
    }
  }
  return std::min(n1,n2);
}

int main()
{
  int arr[] = {1,1,1,0,1,0,0,0,1};
  int ans = minFlips(arr,9);

  cout<<ans;
}
