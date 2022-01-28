#include <bits/stdc++.h>
using namespace std;


//problem = [1 2 print---> 1,2,4,3,5,6
          //3 4
          //5 6]

void printSnake(int arr[][3],int m)
{
  for(int i = 0;i<m;i++)
  {
    int j,k;
    if(i%2==0)
    {
    j = 0;
    }

    else
    j = m-1;

    while(j<m && j>=0)
    {
      cout<<arr[i][j];
      if(i%2==0)
      j++;

      else
      j--;
    }
  }

}


int main()
{
  int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
  printSnake(arr,3);
}
