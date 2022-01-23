#include <bits/stdc++.h>
using namespace std;

///given sorted array
void freq(int arr[],int n)
{
  int temp = arr[0];
  int count = 1;
  int i;
  for(i = 1;i<n;i++)
  {
    if(arr[i]==temp)
    {
      count++;
    }
    else if(arr[i]!=temp){
      cout<<arr[i-1]<<" "<<count<<endl;
      count = 1;
      temp = arr[i];
    }
  }
  cout<<arr[i-1]<<" "<<count<<endl;


}


int main()
{
  int arr[9] = {1,2,4,4,3,3,3,3,3};
  freq(arr,9);
}
