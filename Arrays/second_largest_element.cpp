#include <bits/stdc++.h>
using namespace std;

void secondlargest(int arr[],int n)
{
  int second=-1,largest;
  for(int i = 0;i<n;i++)
  {

    if(i==0)
    largest = arr[i];

    else
    {
      if(arr[i]>largest)
      {
        second = largest;
        largest = arr[i];
      }
      else if(arr[i]!=largest && arr[i]>second)
      {
        second = arr[i];
      }
    }
  }
  if(second==-1)
  cout<<"All elements are equal XD";
  else
  cout<<"The second largest element is "<<second;
}

int main()
{
  int arr[] = {10,10,7,9,7};
  secondlargest(arr,5);
}
