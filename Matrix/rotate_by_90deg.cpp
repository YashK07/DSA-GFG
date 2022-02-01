#include <bits/stdc++.h>
using namespace std;

//rotate the matrix by 90 degree anti clockwise


const int r = 4, c = 4;

void rotate(int arr[r][c]) //efficient sol
{
  int temp[r][c];
  //find max
  for(int i = 0;i<r;i++)
  {
    for(int j = 0;j<c;j++)
    {
    arr[i][j] = (((arr[j][c-1-i])%20)*20) + arr[i][j];
    }
  }
  for(int i = 0;i<r;i++)
  {
    for(int j = 0;j<c;j++)
    {
    arr[i][j] = arr[i][j]/20;
    }
  }
}

//2nd efficient = do the transpose, title it vertically (1st row become the last row, 2nd row --> 2nd last roww and so on)


int main()
{
  int arr[r][c] = {{1,2,3,4},{6,7,8,9},{11,12,13,14},{16,17,18,19}};
  rotate(arr);
  for(int i = 0;i<r;i++)
  {
    for(int j = 0;j<c;j++)
    {
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

}
