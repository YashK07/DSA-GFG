#include <bits/stdc++.h>
using namespace std;


//theta(n)-->time complexity
//theta(k)-->auxillary space
void leftRotatebyK(int arr[],int n,int k) //intermediate efficient - auxillary space (not constant)
{
  int temp[k+1];
  for(int i = 0;i<k;i++)
  {
    temp[i] = arr[i];
  }

  for(int i = k;i<n;i++)
  {
    arr[i-k] = arr[i];
  }

  for(int i = 0;i<k;i++)
  {
    arr[n-k+i] = temp[i];
  }
}


int main()
{
  int arr[] = {1,2,3,4,5};
  leftRotatebyK(arr,5,3);

  for(int i =0;i<5;i++)
  cout<<arr[i];
}
