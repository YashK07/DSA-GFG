#include <bits/stdc++.h>
using namespace std;

const int r = 5,c = 5;
void printBoundary(int arr[r][c])
{
  int i,j;
  if(r==1)//corner cases
  {
    for(int i = 0;i<c;i++)
    {
      cout<<arr[0][i];
    }
  }
  else if(c==1)
  {
    for(int i = 0;i<r;i++)
    {
      cout<<arr[i][0];
    }
  }
else {

    for(i = 0;i<c-1;i++)
    {
      cout<<arr[0][i]<<endl;
    }
    for(j = 0;j<r-1;j++){
      cout<<arr[j][i]<<endl;
    }
    for(i = c-1;i>=1;i--)
    {
      cout<<arr[j][i]<<endl;
    }
    //i+=1;
    //cout<<"**"<<i;
    for(j = r-1;j>=1;j--)
    {
      cout<<arr[j][i]<<endl;
    }
}
  }


int main()
{
  int arr[r][c] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
  printBoundary(arr);
}
