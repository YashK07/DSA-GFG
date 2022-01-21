#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n)
{
if(n==1)
return;
int temp = arr[0];
for(int i = 1;i<n;i++)
  arr[i-1] = arr[i];

arr[n-1] = temp;
}

int main()
{
  int arr[] = {2,3,4};
  leftRotate(arr,1);

  for(int i = 0;i<1;i++)
  cout<<arr[i];

}
