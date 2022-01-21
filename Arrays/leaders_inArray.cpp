#include <bits/stdc++.h>
using namespace std;
//an element is a leader if all the elements to its right are smaller than it.
void leaders(int arr[],int n)
{
  int largest = arr[n-1];
  cout<<arr[n-1]; //the last element is always a leader
  for(int i = n-2;i>=0;i--)
  {
    if(arr[i]>largest)
    {
      largest = arr[i];
      cout<<largest<<" ";
    }
  }
}


int main()
{
  int arr[] = {1,10,2,4,6,5};
  leaders(arr,6);
}
