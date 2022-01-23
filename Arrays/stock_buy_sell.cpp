#include <bits/stdc++.h>
using namespace std;

//given the prices of stock of the next n days. We need to find maximized profit on buying and sellng the stock on some day

int maxProfit(int arr[],int n)
{
  int buy = arr[0],sell;
  int ans = 0;
  for(int i = 1;i<n;i++)
  {
    if(arr[i]>buy)
    {
      sell = arr[i];
      ans+= sell - buy;
      buy = sell;
    }
    else if(arr[i]<=buy)
    {
      buy = arr[i];
    }
  }

  return ans;
}

int main()
{
  int arr[] = {10,20,30};
  int ans = maxProfit(arr,3);

  cout<<ans;
}
