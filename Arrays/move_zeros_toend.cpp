#include <bits/stdc++.h>
using namespace std;



void move(int arr[],int n)
{
  int count = 0;
  for(int i = 0;i<n;i++)
  {
    if(arr[i]!=0)
    {
      swap(arr[i],arr[count]);
      count++;
    }
  }
}

int main()
{
  int arr[] = {1,0,2,0,3,0,4};
  move(arr,7);

  for(int i = 0;i<7;i++)
  {
    cout<<arr[i];
  }
}
