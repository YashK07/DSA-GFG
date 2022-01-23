#include <bits/stdc++.h>
using namespace std;


//find the max len of a subarray with even odd values at alternating places
int len(int arr[],int n)
{
  int count = 1;
  int ans = 0;
  for(int i = 0;i<n-1;i++)
  {
    if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
    {
    count+=1;
    ans = std::max(count,ans);
    }
    else{
      count = 1;
    }

  }
  return ans;
}


int main()
{
  int arr[] = {1,2,3,1,2};
  int ans = len(arr,5);

  cout<<ans;
}
