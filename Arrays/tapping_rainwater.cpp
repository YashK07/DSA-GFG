#include <bits/stdc++.h>
using namespace std;


int findWater(int arr[],int n)
{
int lmax[n+1],rmax[n+1],res = 0;
lmax[0] = arr[0];
rmax[n-1] = arr[n-1];

for(int i = 1;i<n;i++)//create lmax
{
  lmax[i] = std::max(arr[i],lmax[i-1]);
}
for(int i = n-2;i>=0;i--)//create lmax
{
  rmax[i] = std::max(arr[i],rmax[i+1]);
}

for(int i = 1;i<n-1;i++)
{
  res = res + (std::min(lmax[i],rmax[i]) - arr[i]);
}
return res;
}

int main()
{
  int arr[] = {5,0,6,2,3};
  int ans = findWater(arr,5);
  cout<<ans;
}
