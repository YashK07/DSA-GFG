#include <bits/stdc++.h>
using namespace std;


void largest(int arr[])
{
  int index = 0;
  int largest = arr[index];

  for(int i = 1;i<sizeof(arr);i++)
  {
    if(arr[i]>arr[index])
    index = i;
  }
  cout<<"The index of largest element is: "<<index;

}

int main()
{
  int arr[] = {1,4,2,3,10,100,2,1000};
  largest(arr);

  return 0;
}
